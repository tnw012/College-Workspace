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
 * CheckWin
 * ----------------------------------------------------------------------------
 * This function checks to see if either player has run. Once it is
 * possible for a win condition to exist, this should run after each a
 * player makes a play.
 *
 * RETURNS the character value of the player that won or a value that
 * indicates a tie.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     boardAr: Passes in a 2-D array that is used for checking the winner
 *
 * POST-CONDITIONS
 *     This functions will return the token associated with the winner if there
 *     is a tie it returns a space ' '
 *****************************************************************************/
char CheckWin (const char boardAr[][NUM_COLS])// IN - tic tac toe board
{
	char win = ' ';//OUT  - Returns the token of the winner
	int rowIndex;  //PROC - Tracks the row index of the array
	int colIndex;  //PROC - Tracks the column index of the array

	rowIndex = 0;

	//PROCESSING - Checks the rows for a run
	while (rowIndex < NUM_ROWS && win == ' ')
	{
		colIndex = 0;

		if (boardAr[rowIndex][colIndex] == boardAr[rowIndex][colIndex + 1] &&
			boardAr[rowIndex][colIndex + 1] == boardAr[rowIndex][colIndex + 2])
		{
			win = boardAr[rowIndex][colIndex];
		}

		rowIndex++;
	}//END while(rowIndex < NUM_ROWS && win == ' ')

	//PROCESSING - Checks the columns for a run
	while(colIndex < NUM_COLS && win == ' ')
	{
		rowIndex = 0;

		if(boardAr[rowIndex][colIndex] == boardAr[rowIndex + 1][colIndex] &&
		   boardAr[rowIndex + 1][colIndex] == boardAr[rowIndex + 2][colIndex])
		{
			win = boardAr[rowIndex][colIndex];
		}

		colIndex++;
	}//END while(colIndex < NUM_COLS && win == ' ')

    //PROCESSING - Checks the diagonals for a run
	if (win == ' ')
	{
		if(boardAr[0][0] == boardAr[1][1] && boardAr[1][1] == boardAr[2][2])
		{
			win = boardAr[1][1];
		}
		else if (boardAr[0][2] == boardAr [1][1] && boardAr[1][1] ==
				 boardAr[2][0])
		{
			win = boardAr[1][1];
		}
	}
	return win;
}
