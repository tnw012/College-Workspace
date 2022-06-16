/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 2
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 10/11/19
 *****************************************************************************/
#include "TicTacHeader.h"

/******************************************************************************
 * InitBoard
 * ----------------------------------------------------------------------------
 * This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     boardAr: Passes in a 2-D array to initialized to a space ' '
 *
 * POST-CONDITIONS
 *     Board initialized with all spaces
 *****************************************************************************/

void InitBoard (char boardAr[][NUM_COLS])// OUT - tic tac toe board
{
	int rowIndex;//PROC - Tracks the row Index of the array
	int colIndex;//PROC - Tracks the column index of the array

	//Processing - Initializes all of the spaces on the board to a space ' '
	for (rowIndex = 0; rowIndex < NUM_COLS; rowIndex++)
	{
		for (colIndex = 0; colIndex < NUM_COLS; colIndex++)
		{
			boardAr[rowIndex][colIndex] = ' ';
		}
	}

}
