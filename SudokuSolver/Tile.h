#pragma once

#include <list>

class Tile {

public:
	Tile();
	~Tile();

	static const int TILE_VALUE_SET = 0;
	static const int TILE_VALUE_NOT_SET = 1;
	static const int TILE_POSSIBLE_VALUE_UPDATED = 2;
	static const int TILE_ERROR_INVALID_VALUE = -1;
	static const int TILE_ERROR_INVALID_POSITION = -2;
	static const int TILE_ERROR_INVALID_DEPENDENT = -3;
	static const int TILE_ERROR_VALUE_ALREADY_SET = -4;
	static const int TILE_ERROR_CANNOT_SET_VALUE = -5;

	// get the actual value of this tile
	//  returns 0 if value is not known
	unsigned short getValue(void);

	// get mask of possible values of this tile
	//  returns 0 if there are no possible values remaining,
	//  indicating an invalid puzzle
	unsigned short getPossibleValueMask(void);

	// returns true if the value was an initial (i.e., user input) value
	//  and false if the value was a solved value
	bool Tile::getIsInitialValue(void);
		
	// set value from user input
	int setUserValue(unsigned short value);

	// set value from solver
	int setSolvedValue(unsigned short value);

	// clear a value from the possible mask
	int clearPossibleValue(unsigned short value);

	// get/set tile row/column/block
	unsigned short getRow(void);
	int setRow(unsigned short row);
	unsigned short getColumn(void);
	int setColumn(unsigned short column);
	unsigned short getBlock(void);
	int setBlock(unsigned short block);

	// add/remove tile row/column dependent
	void addRowDependent(Tile* dependentTile);
	void removeRowDependent(Tile* dependentTile);
	void addColumnDependent(Tile* dependentTile);
	void removeColumnDependent(Tile* dependentTile);
	void addBlockDependent(Tile* dependentTile);
	void removeBlockDependent(Tile* dependentTile);

	// analyze dependents to whittle down possible value mask
	int analyzeDependents(void);

	// called to back up and restore tile values as part of
	//  brute force solution
	void backupTileValues(void);
	void restoreTileValues(void);

private:
	static const unsigned short maxValue = 9;

	// the actual value of the tile, if known. 0 if unknown
	unsigned short actValue;

	// a mask of possible values
	unsigned short possibleValueMask;

	// track whether this was a user-provided value in the puzzle
	bool isInitialValue;

	// the row/column/block of this tile
	unsigned short tileRow;
	unsigned short tileColumn;
	unsigned short tileBlock;

	// "dependent" tiles in the same row, column, or block
	std::list<Tile*> rowTiles;
	std::list<Tile*> columnTiles;
	std::list<Tile*> blockTiles;

	// backup values for brute force solution
	unsigned short backupActValue;
	unsigned short backupPossibleValueMask;

	// update the possible value masks of dependents to add or
	//  remove a value
	void updateDependentsCommon(bool addValue);

	// add/remove a possible value for dependents
	void addDependentsPossibleValue(void);
	void removeDependentsPossibleValue(void);
	
	// returns true if value is valid based on block/row/column dependencies
	bool isValidValue(unsigned short value);
};