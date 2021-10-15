#include "Tile.h"
#include <map>

// constructor
Tile::Tile(void)
{
	actValue = 0;
	possibleValueMask = (1 << maxValue) - 1;
	isInitialValue = false;
}

// destructor
Tile::~Tile(void)
{
	while (!blockTiles.empty())
	{
		blockTiles.erase(blockTiles.begin());
	}
	while (!rowTiles.empty())
	{
		rowTiles.erase(rowTiles.begin());
	}
	while (!columnTiles.empty())
	{
		columnTiles.erase(columnTiles.begin());
	}
}

// get the actual value of this tile
//  returns 0 if value is not known
unsigned short Tile::getValue(void)
{
	return actValue;
}

// get mask of possible values of this tile
//  returns 0 if there are no possible values remaining,
//  indicating an invalid puzzle
unsigned short Tile::getPossibleValueMask(void)
{
	return possibleValueMask;
}

// returns true if the value was an initial (i.e., user input) value
//  and false if the value was a solved value
bool Tile::getIsInitialValue(void)
{
	return isInitialValue;
}


// set value from user input
int Tile::setUserValue(unsigned short value)
{
	// if a value had already been set, update dependents to add
	//  that value back to possible values first
	if ((actValue != 0) && (actValue != value))
	{
		addDependentsPossibleValue();
	}
	if (isValidValue(value))
	{
		actValue = value;
		if (value != 0)
		{
			possibleValueMask = (1 << (value - 1));
			isInitialValue = true;
			removeDependentsPossibleValue();
		}
		else
		{
			isInitialValue = false;
		}
		return TILE_VALUE_SET;
	}
	else
	{
		return TILE_ERROR_INVALID_VALUE;
	}
}

// set value from solver
int Tile::setSolvedValue(unsigned short value)
{
	if (actValue != 0)
	{
		return TILE_ERROR_VALUE_ALREADY_SET;
	}
	if (value == 0)
	{
		// should not be setting 0 as a solved value
		return TILE_ERROR_INVALID_VALUE;
	}
	if (isValidValue(value))
	{
		actValue = value;
		possibleValueMask = (1 << (value - 1));
		removeDependentsPossibleValue();
		isInitialValue = false;
		return TILE_VALUE_SET;
	}
	else
	{
		return TILE_ERROR_INVALID_VALUE;
	}
}

// clear a value from the possible mask
int Tile::clearPossibleValue(unsigned short value)
{
	if (actValue != 0)
	{
		return TILE_ERROR_VALUE_ALREADY_SET;
	}
	if (value == 0)
	{
		// should not be clearing 0 from the mask
		return TILE_ERROR_INVALID_VALUE;
	}

	possibleValueMask &= ~(1 << (value - 1));

	// check if there is only one value left in mask
	unsigned short validValue = 0;
	for (unsigned short i = 1; i <= maxValue; i++)
	{
		if (possibleValueMask & (1 << (i - 1)))
		{
			if (validValue == 0)
			{
				validValue = i;
			}
			else
			{
				return TILE_POSSIBLE_VALUE_UPDATED;
			}
		}
	}

	return this->setSolvedValue(validValue);
}

// get/set tile row/column/block
unsigned short Tile::getRow(void)
{
	return tileRow;
}
int Tile::setRow(unsigned short row)
{
	if (row >= maxValue)
	{
		return TILE_ERROR_INVALID_POSITION;
	}

	tileRow = row;
	return TILE_VALUE_SET;
}
unsigned short Tile::getColumn(void)
{
	return tileColumn;
}
int Tile::setColumn(unsigned short column)
{
	if (column >= maxValue)
	{
		return TILE_ERROR_INVALID_POSITION;
	}

	tileColumn = column;
	return TILE_VALUE_SET;
}
unsigned short Tile::getBlock(void)
{
	return tileBlock;
}
int Tile::setBlock(unsigned short block)
{
	if (block >= maxValue)
	{
		return TILE_ERROR_INVALID_POSITION;
	}

	tileBlock = block;
	return TILE_VALUE_SET;
}


// set tile row/column dependent
void Tile::addRowDependent(Tile* dependentTile)
{
	rowTiles.push_back(dependentTile);
}
void Tile::removeRowDependent(Tile* dependentTile)
{
	rowTiles.remove(dependentTile);
}
void Tile::addColumnDependent(Tile* dependentTile)
{
	columnTiles.push_back(dependentTile);
}
void Tile::removeColumnDependent(Tile* dependentTile)
{
	columnTiles.remove(dependentTile);
}
void Tile::addBlockDependent(Tile* dependentTile)
{
	blockTiles.push_back(dependentTile);
}
void Tile::removeBlockDependent(Tile* dependentTile)
{
	blockTiles.remove(dependentTile);
}

// analyze dependents to whittle down possible value mask
int Tile::analyzeDependents(void)
{
	std::list<Tile*>::iterator dependentIt;
	std::list<unsigned short> possibleValues;

	// first, construct a current list of possible values.
	// if it's down to one, we're done
	for (unsigned int i = 1; i <= maxValue; ++i)
	{
		if (possibleValueMask & (1 << (i - 1)))
		{
			possibleValues.push_back(i);
		}
	}
	// if only one possible value, we can set
	if (possibleValues.size() == 1)
	{
		return setSolvedValue(possibleValues.back());
	}

	// next, determine if any possible value for this tile is the only 
	//  occurrence of that possible value within any of its dependencies
	// if so, we have our solution
	std::list<unsigned short>::iterator it;

	// look thru block...
	unsigned short foundValue = 0;
	for (it = possibleValues.begin(); it != possibleValues.end(); ++it)
	{
		unsigned short valueMask = (1 << ((*it) - 1));
		bool found = false;
		for (dependentIt = blockTiles.begin(); dependentIt != blockTiles.end(); ++dependentIt)
		{
			if ((*dependentIt)->possibleValueMask & valueMask)
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			// we did not find this value in the block dependents so it is unique.
			// However, if there is another value that also was found to be unique, 
			// we have an invalid puzzle
			if (foundValue != 0)
			{
				return TILE_ERROR_INVALID_DEPENDENT;
			}
			foundValue = *it;
		}
	}

	// if we found a value that matches the criteria for this block, set it as a solved value
	if (foundValue != 0)
	{
		return setSolvedValue(foundValue);
	}

	// ...row...
	foundValue = 0;
	for (it = possibleValues.begin(); it != possibleValues.end(); ++it)
	{
		unsigned short valueMask = (1 << ((*it) - 1));
		bool found = false;
		for (dependentIt = rowTiles.begin(); dependentIt != rowTiles.end(); ++dependentIt)
		{
			if ((*dependentIt)->possibleValueMask & valueMask)
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			// we did not find this value in the row dependents so it is unique.
			// However, if there is another value that also was found to be unique, 
			// we have an invalid puzzle
			if (foundValue != 0)
			{
				return TILE_ERROR_INVALID_DEPENDENT;
			}
			foundValue = *it;
		}
	}

	// if we found a value that matches the criteria for this row, set it as a solved value
	if (foundValue != 0)
	{
		return setSolvedValue(foundValue);
	}

	// ...and column
	foundValue = 0;
	for (it = possibleValues.begin(); it != possibleValues.end(); ++it)
	{
		unsigned short valueMask = (1 << ((*it) - 1));
		bool found = false;
		for (dependentIt = columnTiles.begin(); dependentIt != columnTiles.end(); ++dependentIt)
		{
			if ((*dependentIt)->possibleValueMask & valueMask)
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			// we did not find this value in the column dependents so it is unique.
			// However, if there is another value that also was found to be unique, 
			// we have an invalid puzzle
			if (foundValue != 0)
			{
				return TILE_ERROR_INVALID_DEPENDENT;
			}
			foundValue = *it;
		}
	}

	// if we found a value that matches the criteria for this column, set it as a solved value
	if (foundValue != 0)
	{
		return setSolvedValue(foundValue);
	}

	// for final pass, determine whether groupings of dependents form a group of 2 or more possible values
	//  whose size is equal to the number of tiles in the grouping. If so, those possible values may be 
	//  removed as possible values for all other dependents

	// first, create list of all possible masks that include 2 or more possible values for this tile
	std::list<std::pair<unsigned short, int>> groupingMasks;
	unsigned short i, j;
	for (i = 1; i < ((1 << maxValue) - 1); ++i)
	{
		if (possibleValueMask & (i ^ possibleValueMask))
		{
			int numMatchingValues = 0, numMaskValues = 0;
			for (j = 0; j < maxValue; j++)
			{
				if ((possibleValueMask & (1 << j)) == possibleValueMask)
				{
					numMatchingValues++;
				}
				if (i & (1 << j))
				{
					numMaskValues++;
				}
			}
			if (numMatchingValues >= 2)
			{
				std::pair<unsigned short, int> maskAndNumValues;
				maskAndNumValues.first = i;
				maskAndNumValues.second = numMaskValues;
				groupingMasks.push_back(maskAndNumValues);
			}
		}
	}

	// next, iterate through possible grouping masks to find other tiles that also match
	// add them to a list. If the final list is equal to the number of values in the
	// mask in size, then all the values in the mask can be removed from all other dependents
	// and all tiles in the grouping can be updated to only have the values in the mask
	// as always, do this for blocks...
	std::list<std::pair<unsigned short, int>>::iterator groupingIt;
	for (groupingIt = groupingMasks.begin(); groupingIt != groupingMasks.end(); ++groupingIt)
	{
		std::list<Tile*> tileGrouping;
		std::list<Tile*> notInTileGrouping;
		tileGrouping.push_back(this);
		for (dependentIt = blockTiles.begin(); dependentIt != blockTiles.end(); ++dependentIt)
		{
			if (((*dependentIt)->possibleValueMask & (groupingIt->first ^ (*dependentIt)->possibleValueMask)) == 0)
			{
				tileGrouping.push_back(*dependentIt);
			}
			else
			{
				notInTileGrouping.push_back(*dependentIt);
			}
		}
		if (tileGrouping.size() == groupingIt->second)
		{
			for (dependentIt = tileGrouping.begin(); dependentIt != tileGrouping.end(); ++dependentIt)
			{
				std::list<Tile*>::iterator removeIt;
				(*dependentIt)->possibleValueMask &= groupingIt->first;
				if ((*dependentIt)->possibleValueMask == 0)
				{
					(*dependentIt)->possibleValueMask = 0;
				}
				for (removeIt = notInTileGrouping.begin(); removeIt != notInTileGrouping.end(); ++removeIt)
				{
					(*removeIt)->possibleValueMask &= ~((*dependentIt)->possibleValueMask);
					if ((*removeIt)->possibleValueMask == 0)
					{
						(*removeIt)->possibleValueMask = 0;
					}
				}
			}
		}
	}

	// ...rows...
	for (groupingIt = groupingMasks.begin(); groupingIt != groupingMasks.end(); ++groupingIt)
	{
		std::list<Tile*> tileGrouping;
		std::list<Tile*> notInTileGrouping;
		tileGrouping.push_back(this);
		for (dependentIt = rowTiles.begin(); dependentIt != rowTiles.end(); ++dependentIt)
		{
			if (((*dependentIt)->possibleValueMask & (groupingIt->first ^ (*dependentIt)->possibleValueMask)) == 0)
			{
				tileGrouping.push_back(*dependentIt);
			}
			else
			{
				notInTileGrouping.push_back(*dependentIt);
			}
		}
		if (tileGrouping.size() == groupingIt->second)
		{
			for (dependentIt = tileGrouping.begin(); dependentIt != tileGrouping.end(); ++dependentIt)
			{
				std::list<Tile*>::iterator removeIt;
				(*dependentIt)->possibleValueMask &= groupingIt->first;
				if ((*dependentIt)->possibleValueMask == 0)
				{
					(*dependentIt)->possibleValueMask = 0;
				}
				for (removeIt = notInTileGrouping.begin(); removeIt != notInTileGrouping.end(); ++removeIt)
				{
					(*removeIt)->possibleValueMask &= ~((*dependentIt)->possibleValueMask);
					if ((*removeIt)->possibleValueMask == 0)
					{
						(*removeIt)->possibleValueMask = 0;
					}
				}
			}
		}
	}

	// ...and columns
	for (groupingIt = groupingMasks.begin(); groupingIt != groupingMasks.end(); ++groupingIt)
	{
		std::list<Tile*> tileGrouping;
		std::list<Tile*> notInTileGrouping;
		tileGrouping.push_back(this);
		for (dependentIt = columnTiles.begin(); dependentIt != columnTiles.end(); ++dependentIt)
		{
			if (((*dependentIt)->possibleValueMask & (groupingIt->first ^ (*dependentIt)->possibleValueMask)) == 0)
			{
				tileGrouping.push_back(*dependentIt);
			}
			else
			{
				notInTileGrouping.push_back(*dependentIt);
			}
		}
		if (tileGrouping.size() == groupingIt->second)
		{
			for (dependentIt = tileGrouping.begin(); dependentIt != tileGrouping.end(); ++dependentIt)
			{
				std::list<Tile*>::iterator removeIt;
				if ((*dependentIt)->possibleValueMask == 0)
				{
					(*dependentIt)->possibleValueMask = 0;
				}
				for (removeIt = notInTileGrouping.begin(); removeIt != notInTileGrouping.end(); ++removeIt)
				{
					(*removeIt)->possibleValueMask &= ~((*dependentIt)->possibleValueMask);
					if ((*removeIt)->possibleValueMask == 0)
					{
						(*removeIt)->possibleValueMask = 0;
					}
				}
			}
		}
	}

	return TILE_VALUE_NOT_SET;
}

// called to back up and restore tile values as part of
//  brute force solution
void Tile::backupTileValues(void)
{
	backupActValue = actValue;
	backupPossibleValueMask = possibleValueMask;
}
void Tile::restoreTileValues(void)
{
	actValue = backupActValue;
	possibleValueMask = backupPossibleValueMask;
}

// update the possible value masks of dependents to add or
//  remove a value
// assume: value has already been validated
void Tile::updateDependentsCommon(bool addValue)
{
	std::list<Tile*>::iterator it;
	unsigned short valueMask = (1 << (this->actValue - 1));

	// update possible value masks within block...
	for (it = blockTiles.begin(); it != blockTiles.end(); ++it)
	{
		if (addValue)
		{
			(*it)->possibleValueMask |= valueMask;
		}
		else {
			(*it)->possibleValueMask &= ~valueMask;
		}
	}

	// ...row...
	for (it = rowTiles.begin(); it != rowTiles.end(); ++it)
	{
		if (addValue)
		{
			(*it)->possibleValueMask |= valueMask;
		}
		else {
			(*it)->possibleValueMask &= ~valueMask;
		}
	}

	// ...and column
	for (it = columnTiles.begin(); it != columnTiles.end(); ++it)
	{
		if (addValue)
		{
			(*it)->possibleValueMask |= valueMask;
		}
		else {
			(*it)->possibleValueMask &= ~valueMask;
		}
	}
}

// add/remove a possible value for dependents
void Tile::addDependentsPossibleValue(void)
{
	updateDependentsCommon(true);
}
void Tile::removeDependentsPossibleValue(void)
{
	updateDependentsCommon(false);
}


// returns true if value is valid based on block/row/column dependencies
bool Tile::isValidValue(unsigned short value)
{
	std::list<Tile*>::iterator it;
	unsigned short valueMask = (1 << (value - 1));

	// value of 0 indicates user is clearing this tile (always valid)
	if (value == 0)
	{
		return true;
	}

	// check value against both actual and possible values within block...
	for (it = blockTiles.begin(); it != blockTiles.end(); ++it)
	{
		if ((value == (*it)->actValue) || (valueMask == (*it)->possibleValueMask))
		{
			return false;
		}
	}

	// ...row...
	for (it = rowTiles.begin(); it != rowTiles.end(); ++it)
	{
		if ((value == (*it)->actValue) || (valueMask == (*it)->possibleValueMask))
		{
			return false;
		}
	}

	// ...and column
	for (it = columnTiles.begin(); it != columnTiles.end(); ++it)
	{
		if ((value == (*it)->actValue) || (valueMask == (*it)->possibleValueMask))
		{
			return false;
		}
	}

	// if value has not been found among the block/row/column dependents of this tile,
	//  it is still a valid value (though not necessarily the correct value)
	return true;
}