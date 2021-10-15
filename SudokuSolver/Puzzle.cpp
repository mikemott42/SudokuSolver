#include "Puzzle.h"

// constructor
Puzzle::Puzzle(void) 
{
	unsigned short row, column, block;

	// create all tiles on the puzzle
	for (row = 0; row < numRows; ++row)
	{
		for (column = 0; column < numColumns; ++column) {
			Tile* newTile = new Tile;
			tileArray.push_back(newTile);
			unknownTiles.push_back(newTile);

			// for each newly created tile, create reciprocal row/column/block
			//  dependencies with previously created tiles
			TileList::iterator it;
			for (it = rowTiles[row].begin(); it != rowTiles[row].end(); ++it)
			{
				(*it)->addRowDependent(newTile);
				newTile->addRowDependent((*it));
			}
			newTile->setRow(row);
			rowTiles[row].push_back(newTile);

			for (it = columnTiles[column].begin(); it != columnTiles[column].end(); ++it)
			{
				(*it)->addColumnDependent(newTile);
				newTile->addColumnDependent((*it));
			}
			newTile->setColumn(column);
			columnTiles[column].push_back(newTile);

			block = ((row / 3) * 3) + (column / 3);
			for (it = blockTiles[block].begin(); it != blockTiles[block].end(); ++it)
			{
				(*it)->addBlockDependent(newTile);
				newTile->addBlockDependent((*it));
			}
			newTile->setBlock(block);
			blockTiles[block].push_back(newTile);
		}
	}
}

// destructor
Puzzle::~Puzzle(void)
{
	std::map<unsigned short, TileList>::iterator it;

	while (!knownTiles.empty())
	{
		knownTiles.pop_back();
	}

	while (!unknownTiles.empty())
	{
		unknownTiles.pop_back();
	}

	while (!tileArray.empty())
	{
		delete tileArray.back();
		tileArray.pop_back();
	}

	for (int i = 0; i < numRows; ++i)
	{
		while (!rowTiles[i].empty()) {
			rowTiles[i].pop_back();
		}

		rowTiles.erase(rowTiles.begin());
	}
	for (int i = 0; i < numColumns; ++i)
	{
		while (!columnTiles[i].empty()) {
			columnTiles[i].pop_back();
		}

		columnTiles.erase(columnTiles.begin());
	}
	for (int i = 0; i < numBlocks; ++i)
	{
		while (!blockTiles[i].empty()) {
			blockTiles[i].pop_back();
		}

		blockTiles.erase(blockTiles.begin());
	}
}


// returns the value of the tile at the given row/column position
//  zero-indexed from top left to bottom right
int Puzzle::getTileValue(unsigned short row, unsigned short column, unsigned short* value,
	bool* isInitialValue)
{
	Tile* pTile;

	unsigned short arrayIndex = (row * numRows) + column;

	if ((row >= numRows) || (column >= numColumns))
	{
		return PUZZLE_ERROR_INVALID_TILE;
	}

	pTile = tileArray[arrayIndex];
	if (value)
	{
		*value = pTile->getValue();
	}
	if (isInitialValue)
	{
		*isInitialValue = pTile->getIsInitialValue();
	}
	return 0;
}

// sets the value of the tile at the given row/column position
//  zero-indexed from top left to bottom right
// returns an error if the tile value is invalid based on existing
//  information in the puzzle
int Puzzle::setTileValue(unsigned short row, unsigned short column, unsigned short value)
{
	Tile* pTile;
	int retVal;

	unsigned short arrayIndex = (row * numRows) + column;

	if ((row >= numRows) || (column >= numColumns))
	{
		return PUZZLE_ERROR_INVALID_TILE;
	}
	
	pTile = tileArray[arrayIndex];
	retVal = pTile->setUserValue(value);
	if ((value != 0) && (retVal != Tile::TILE_ERROR_INVALID_VALUE))
	{
		unknownTiles.remove(pTile);
		knownTiles.push_back(pTile);
	}

	return retVal;
}

// called to run the puzzle solving algorithm
//  returns an error if puzzle lacks sufficient information to be solved
int Puzzle::solve(void)
{
	std::list<Tile*>::iterator it;
	int retVal;

	// repeatedly analyze dependents to whittle down each block, row, and column 
	//  as possible based on possible values. If we find a setting for a tile
	//  add it to known values and remove it from unknown. If we don't find a new
	//  setting for any tile, move on to next phase of analysis
	while (!unknownTiles.empty())
	{
		int numUnknownTiles = unknownTiles.size();
		it = unknownTiles.begin(); 
		while (it != unknownTiles.end())
		{
			retVal = (*it)->analyzeDependents();
			if (retVal == Tile::TILE_ERROR_INVALID_DEPENDENT)
			{
				return PUZZLE_ERROR_CANNOT_BE_SOLVED;
			}
			if (retVal == Tile::TILE_VALUE_SET)
			{
				knownTiles.push_back(*it);
				it = unknownTiles.erase(it);
			}
			else
			{
				++it;
			}
		}

		if (numUnknownTiles == unknownTiles.size())
		{
			break;
		}
	}

	if (unknownTiles.empty())
	{
		return PUZZLE_SOLVED;
	}

	// if we don't have an answer yet, go thru remaining unknown tiles
	//  and brute force test remaining possible values
	typedef std::pair<Tile*, std::vector<unsigned short>> TestTileType;
	std::list<TestTileType> testTiles;
	for (it = unknownTiles.begin(); it != unknownTiles.end(); ++it)
	{
		std::vector<unsigned short> possibleValues;
		unsigned short possibleValueMask = (*it)->getPossibleValueMask();
		TestTileType testTile;

		for (unsigned short j = 1; j <= numRows; ++j)
		{
			if (possibleValueMask & (1 << (j - 1)))
			{
				possibleValues.push_back(j);
			}
		}
		testTile.first = *it;
		testTile.second = possibleValues;
		testTiles.push_back(testTile);
	}

	while (!testTiles.empty())
	{
		TestTileType testTile = testTiles.front();
		testTiles.pop_front();
		for (unsigned short j = 0; j < testTile.second.size(); ++j)
		{
			Tile* tile = testTile.first;
			unsigned short value = testTile.second[j];
			std::list<Tile*> backupKnown = knownTiles;
			std::list<Tile*> backupUnknown = unknownTiles;

			for (it = unknownTiles.begin(); it != unknownTiles.end(); ++it)
			{
				(*it)->backupTileValues();
			}

			// treat each new tile tested as a known tile to bound the number of recursive
			//  calls to the solve function. Either we will find a conflict, indicating this
			//  setting combined with other test settings is invalid, or we will empty out
			//  our unknown tiles without finding a conflict, indicating we have our answer
			if (tile->setSolvedValue(value) != Tile::TILE_VALUE_SET)
			{
				return PUZZLE_ERROR_UNKNOWN;
			}
			knownTiles.push_back(tile);
			unknownTiles.remove(tile);

			retVal = this->solve();

			if (retVal == PUZZLE_SOLVED)
			{
				return retVal;
			}

			knownTiles = backupKnown;
			unknownTiles = backupUnknown;
			for (it = unknownTiles.begin(); it != unknownTiles.end(); ++it)
			{
				(*it)->restoreTileValues();
			}

			// if that tile setting yielded an unsolvable puzzle, it can be removed
			// as a possible setting for that tile and re-analyzed
			if (retVal == PUZZLE_ERROR_CANNOT_BE_SOLVED)
			{
				retVal = tile->clearPossibleValue(value);
				if (retVal == Tile::TILE_VALUE_SET)
				{
					knownTiles.push_back(tile);
					unknownTiles.remove(tile);
					testTiles.remove(testTile);
					break;
				}
				else if (retVal != Tile::TILE_POSSIBLE_VALUE_UPDATED)
				{
					return PUZZLE_ERROR_UNKNOWN;
				}
			}
		}
	}

	// at this point, if there's still no solution, conclude there is not enough information
	//  to solve the puzzle
	return PUZZLE_ERROR_NOT_ENOUGH_INFO;
}