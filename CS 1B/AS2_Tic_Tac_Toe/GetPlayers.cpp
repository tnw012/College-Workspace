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
 * GetPlayers
 * ----------------------------------------------------------------------------
 * This function prompts the user and gets the input for the players’ names.
 * playerX will always contain the name of the player that is using the X token.
 * playerO will always contain the name of the player that is using the O token.
 *
 * RETURNS: The players names through the variables playerX and playerO.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     playerX: Associates either player with the token X
 *     playerO: Associates either player with the token O
 *     choice : Passes in an integer associated with a menu choice
 *
 * POST-CONDITIONS
 *     This functions prompts the players for their names and associates player
 *     one as the X token and player two as the O token
 *****************************************************************************/

void GetPlayers(string& playerX,//OUT - player X’s name
		        string& playerO,//OUT - player O's name
				int choice)     //IN - Passes in an integer
{
	if (choice == 1)
	{
		cout << "Single player mode\n\n";

		//INPUT- Gets the name of player one
		cout << left;
		cout << setw(PROMPT_COL)<< "Player One enter your name:";
		getline(cin, playerX);
		cout << right;
		cout << endl;

		//assigns player two the name of CPU
		playerO = "CPU";
	}
	else
	{
		cout << "Two player mode\n\n";

		//INPUT - Gets the name of player one
		cout << left;
		cout << setw(PROMPT_COL)<< "Player One enter your name:";
		getline(cin, playerX);
		cout << endl;

		//INPUT - Gets the name of player two
		cout << setw(PROMPT_COL)<< "Player Two enter your name:";
		getline(cin, playerO);
		cout << right;
		cout << endl;
	}//END if(choice == 1)
}
