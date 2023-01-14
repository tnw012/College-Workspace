#include "TicTacToe.h"

/******************************************************************************
 * METHOD TicTacToe: Class TicTacToe (CONSTRUCTOR)
 * ----------------------------------------------------------------------------
 * This method initializes the attributes of the class
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method initializes the attributes of the class
 *****************************************************************************/
TicTacToe::TicTacToe()
{
	gameToken  = ' ';
	menuChoice = 0;
	turn = 0;
	winResults = ' ';

}

/******************************************************************************
 * METHOD StackList: Class StackList (DESTRUCTOR)
 * ----------------------------------------------------------------------------
 * This method deletes the linked list node by node until the head pointer is
 * equal to NULL
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS: none
 *****************************************************************************/
TicTacToe::~TicTacToe()
{
}

/******************************************************************************
 * METHOD InitBoard: Class TicTacToe
 * ----------------------------------------------------------------------------
 * This method initializes each spot in the board to a space ' '.
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   boardAr: Passes in a 2-D array to initialized to a space ' '
 *
 * POST-CONDITIONS:
 * 	   Board initialized all spaces
 *****************************************************************************/
 void TicTacToe::InitBoard(char boardAr[][NUM_COLS])//OUT - tic tac toe board
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
	}//END outer for loop
}

/******************************************************************************
* METHOD SetPlayers: Class TicTacToe
* ----------------------------------------------------------------------------
* This method prompts the user and gets the input for the players’ names.
* playerX will always contain the name of the player that is using the X token.
* playerO will always contain the name of the player that is using the O token.
*
* RETURNS: The players names through the variables playerX and playerO.
* ----------------------------------------------------------------------------
* PRE-CONDITIONS:
* 	  playerX: Associates either player with the token X
*     playerO: Associates either player with the token O
*     choice : Passes in an integer associated with a menu choice
*
* POST-CONDITIONS:
* 	  This method prompts the players for their names and associates player
*     one as the X token and player two as the O token
******************************************************************************/
void TicTacToe::SetPlayers(string& playerX,//OUT - player X’s name
 		        		   string& playerO,//OUT - player O's name
						   int choice)     //IN  - Passes in an integer
 {
 	if (choice == 1)
 	{
 		std::cout << "Single player mode\n\n";

 		//INPUT- Gets the name of player one
 		std::cout << std::left;
 		std::cout << std::setw(PROMPT_COL)<< "Player One enter your name:";
 		getline(std::cin, playerX);
 		std::cout << std::right;
 		std::cout << std::endl;

 		//assigns player two the name of CPU
 		playerO = "CPU";
 	}
 	else
 	{
 		std::cout << "Two player mode\n\n";

 		//INPUT - Gets the name of player one
 		std::cout << std::left;
 		std::cout << std::setw(PROMPT_COL)<< "Player One enter your name:";
 		getline(std::cin, playerX);
 		std::cout << std::endl;

 		//INPUT - Gets the name of player two
 		std::cout << std::setw(PROMPT_COL)<< "Player Two enter your name:";
 		getline(std::cin, playerO);
 		std::cout << std::right;
 		std::cout << std::endl;
 	}//END if(choice == 1)
}

/******************************************************************************
 * METHOD GetAndCheckInp: Class TicTacToe
 * ----------------------------------------------------------------------------
 * This method passes in tic tac toe board and prompts the players to pick a
 * spot for their token. It then checks and validates the location on the board
 * then places the correct token on the board
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   boardAr: 2-D array used to place the player tokens
 *     token  : Must be defined in the calling function used to place token
 *     playerX: Player associated with the X token
 *     playerO: Player associated with the O token
 *
 * POST-CONDITIONS:
 * 	   This functions validates and places the corresponding token to the player
 *     on the board
 *****************************************************************************/
void TicTacToe::GetAndCheckInp(char boardAr[][NUM_COLS],//IN - Passes in 2-D array
							   char token,         //IN - token to be placed
							   string playerX,     //IN - prompts the play of X
							   string playerO)     //IN - prompts the play of O
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
			std::cout << playerX << "\'s turn! What\'s your play?:";
			std::cin  >> row >> col;
			row--;
			col--;
		}
		else
		{
			if (playerO != "CPU")
			{
				//INPUT- Gets the O player move choice
				std::cout << playerO << "\'s turn! What\'s your play?:";
				std::cin  >> row >> col;
				row--;
				col--;
			}
		}

		//PROCESSING - Validates the input to check if the space is available
		if (row > NUM_COLS - 1 || row < 0)
		{
			std::cout << "Invalid row\n";
		}
		else if ( col > NUM_COLS - 1 || col < 0)
		{
			std::cout <<  "Invalid Column\n";
		}
		else if (!isspace(boardAr[row][col]))
		{
			std::cout << "That spot is already taken.\n";
		}
		else
		{
			valid = true;
		}
	}while(!valid);

	//PROCESSING - Assigns the token to the specified spot on the board
	boardAr[row][col] = token;
	std::cin.ignore(1000, '\n');
	std::cout << std::endl;
}

