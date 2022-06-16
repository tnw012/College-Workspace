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
 * GetAndCheckInput
 * ----------------------------------------------------------------------------
 * This function passes in tic tac toe board and prompts the players to pick a
 * spot for their token. It then checks and validates the location on the board
 * then places the correct token on the board
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     boardAr: 2-D array used to place the player tokens
 *     token  : Must be defined in the calling function used to place token
 *     playerX: Player associated with the X token
 *     playerO: Player associated with the O token
 *
 * POST-CONDITIONS
 *     This functions validates and places the corresponding token to the player
 *     on the board
 *****************************************************************************/

void GetAndCheckInp(char boardAr[][NUM_COLS],//IN - Tic tac toe board
					char token,              //IN - token to be placed on board
					string playerX,          //IN - Prompts to play token X
					string playerO)          //IN - Prompts to play token O
{
	int row;   //IN   - Used to store the value of the row being played
	int col;   //IN   - Used to store the value of the column being played
	bool valid;//PROC - Boolean value used to determine whether to exit the
	           //while loop or not

	//INITIALIZATIONS
	valid = false;

	do
	{
		if (token == 'X')
		{
			//INPUT - Gets the X player move choice
			cout << playerX << "\'s turn! What\'s your play?:";
			cin  >> row >> col;
			row--;
			col--;
		}
		else
		{
			if (playerO != "CPU")
			{
				//INPUT- Gets the O player move choice
				cout << playerO << "\'s turn! What\'s your play?:";
				cin  >> row >> col;
				row--;
				col--;
			}
		}

		//PROCESSING - Validates the input to check if the space is available
		if (row > NUM_COLS - 1 || row < 0)
		{
			cout << "Invalid row\n";
		}
		else if ( col > NUM_COLS - 1 || col < 0)
		{
			cout <<  "Invalid Column\n";
		}
		else if (!isspace(boardAr[row][col]))
		{
			cout << "That spot is already taken.\n";
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
