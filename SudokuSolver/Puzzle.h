#pragma once

#include "Tile.h"
#include <vector>
#include <map>
#include <list>

class Puzzle {

public:
	Puzzle();
	~Puzzle();

	static const int PUZZLE_SOLVED = 0;
	static const int PUZZLE_NOT_SOLVED = 1;
	static const int PUZZLE_ERROR_INVALID_TILE = -1;
	static const int PUZZLE_ERROR_NOT_ENOUGH_INFO = -2;
	static const int PUZZLE_ERROR_CANNOT_BE_SOLVED = -3;
	static const int PUZZLE_ERROR_UNKNOWN = -255;

	// returns the value of the tile at the given row/column position
	//  zero-indexed from top left to bottom right
	int getTileValue(unsigned short row, unsigned short column, unsigned short* value,
		bool* isInitialValue);
		
	// sets the value of the tile at the given row/column position
	//  zero-indexed from top left to bottom right
	// returns an error if the tile value is invalid based on existing
	//  information in the puzzle
	int setTileValue(unsigned short row, unsigned short column, unsigned short value);
		
	// called to run the puzzle solving algorithm
	//  returns an error if puzzle lacks sufficient information
	int solve(void);

	// called to clear the puzzle
	void clearPuzzle(void);

private:
	// number of rows/columns/blocks in the puzzle
	static const int numRows = 9;
	static const int numColumns = 9;
	static const int numBlocks = 9;

	// the array of tiles in the puzzle
	std::vector<Tile*> tileArray;

	// track the total number of tiles and which ones have known values
	std::list<Tile*> knownTiles;
	std::list<Tile*> unknownTiles;

	// track list of tiles for each row/column/block
	typedef std::vector<Tile*> TileList;
	std::map<unsigned short, TileList> rowTiles;
	std::map<unsigned short, TileList> columnTiles;
	std::map<unsigned short, TileList> blockTiles;
};