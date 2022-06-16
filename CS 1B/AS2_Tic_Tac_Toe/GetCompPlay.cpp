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
 * GetCompPlay
 * ----------------------------------------------------------------------------
 * This function passes in tic tac toe board and prompts the computer to pick a
 * spot for its token. It then checks and validates the location on the board
 * then places the token on the board
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     boardAr: Passes in the tic tac toe board
 *     playerO: Associates the computer with the token O
 *
 *
 * POST-CONDITIONS
 *     This functions prompts the computer for its play and places the token
 *     on the board in the correct spot
 *****************************************************************************/
void GetCompPlay(char boardAr[][NUM_COLS],//IN - Passes in a 2-D array
		         char token,              //IN - token to be placed on board
		         string playerO)          //IN - Passes in the CPU as a name
{
	bool valid;//PROC - Boolean value used to determine whether to exit the
               //while loop or not
	int row;   //IN   - Used to store the value of the row being played
	int col;   //IN   - Used to store the value of the column being played

	//INITIALIZATONS
	row = rand() % 4;
	col = rand() % 4;

	do
	{
		valid = false;

		//INPUT - Gets the computers move
		cout << playerO << " \'s turn! What is your play?:";
		cout << row << ' ' << col;
		cout << "\n Press enter to continue.";
		row--;
		col--;
		cout << endl;

		//PROCESSING - Checks and validates the input if the space is not
		//available the computer picks a new spot until one it available
		if (!isspace(boardAr[row][col]))
		{
			cout << "\n Choosing spot\n\n";
			row = rand() % 4;
			col = rand() % 4;
		}
		else
		{
			valid = true;
		}
	}while(!valid);

	//PROCESSING - Assigns the token to the specified spot on the board
	boardAr[row][col] = token;
	cin.ignore(1000, '\n');
	cout << endl;
}
