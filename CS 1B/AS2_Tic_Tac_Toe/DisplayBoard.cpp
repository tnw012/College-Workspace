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
 * DisplayBoard
 * ----------------------------------------------------------------------------
 * This function outputs the tic tac toe board including the tokens
 * played in the proper format (as described below).
 *
 *      	  1		   2		3
 * 		[1][1] | [1][2] | [1][3]
 *             | 		|
 *  1          | 		|
 *             |        |
 * 		--------------------------
 * 		[2][1] | [2][2] | [2][3]
 * 	           |        |
 *  2          |        |
 *             |        |
 *       --------------------------
 * 		[3][1] | [3][2] | [3][3]
 *             |        |
 *  3          |        |
 *             |        |
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *    boardAr: passes by constant reference the array for the game board
 *
 * POST-CONDITIONS
 *     This functions outputs the tic tac toe board and the current state of
 *     the board
 *****************************************************************************/

void DisplayBoard(const char boardAr[][NUM_COLS])// IN - tic tac toe board
{
	int rowIndex;//PROC - Tracks the rows index for the 2-D array
	int colIndex;//PROC - Tracks the columns index for the 2-D array

	system("cls");

	//Outputs the row and column identifiers
	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";

	for (rowIndex = 0; rowIndex < NUM_COLS; rowIndex++)
	{
		//Outputs each of the spots on the board to play in
		cout << setw(7) << "[" << rowIndex + 1 << "][1] | " << "[" << rowIndex+1;
		cout << "][2] | " << "[" << rowIndex + 1 << "][3]" << endl;
		cout << setw(14) << "|" << setw(9) << "|" << endl;
		for (colIndex = 0; colIndex < NUM_COLS; colIndex++)
		{
			//outputs the brackets that defines each column
			switch(colIndex)
			{
				case 0: cout << rowIndex + 1 << setw(9)
							 << boardAr[rowIndex][colIndex];
						cout << setw(4) << "|";
				break;

				case 1: cout << setw(4) << boardAr[rowIndex][colIndex];
						cout << setw(5) << "|";
				break;

				case 2: cout << setw(4) << boardAr[rowIndex][colIndex] << endl;
				break;

				default: cout <<"ERROR!\n\n";
			}//End switch
		}//End for( colIndex = 0; colIndex < 3; colIndex++)

		cout << setw(14)<< "|" << setw(10) << "|\n";

		if (rowIndex != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}
	}//End for (rowIndex = 0; rowIndex < 3; rowIndex++)
	cout << endl << endl;

}
