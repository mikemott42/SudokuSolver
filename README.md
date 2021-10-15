# SudokuSolver
Basic Sudoku puzzle solver

This Sudoku puzzle solver application is presented as a Windows application. The executable can be found at SudokuSolver/Release/SudokuSolver.exe. It was designed in Visual Studio C++. The overall solution file SudokuSolver/SudokuSolver.sln can be opened in Visual Studio and rebuilt as needed.

The application currently supports building and solving 9x9 Sudoku puzzles. It will allow a value to be entered for any element (tile) of the puzzle. Invalid values (i.e., that conflict with existing tile values) will be indicated using red font. Solved (non-user input) values are displayed in blue. In addition, the application provides the capability to open and save Sudoku puzzles, which use an extension of .puz as a default. The puzzles are saved in a basic, comma-delimited text format that specifies the value for each tile block, with the first row being defined as the first line on down to the ninth row. An example puzzle has been provided at SudokuSolver/example.puz.

The primary class is named Puzzle and its header file information may be found at SudokuSolver/SudokuSolver/Puzzle.h. It contains information about all tiles within the puzzle. The Puzzle class was designed to be incorporated into any GUI. The following API is available for the Puzzle class:
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
