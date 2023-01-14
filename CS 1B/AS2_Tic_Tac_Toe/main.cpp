/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 2
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 10/11/19
 *****************************************************************************/
#include "TicTacToe.h"

using namespace std;

/*****************************************************************************
 * Tic Tac Toe
 * ---------------------------------------------------------------------------
 * This program will out a instructions on how to play tic tac toe. Once the
 * users picks a menu option they will then be prompted to enter their name and
 * another if playing in multiplayer. In single player the user will play
 * against the computer. The program will then prompt the player with the X
 * token to go first by picking their spot. Then the computer or player
 * associated with the O token will be prompted for a turn. this continues
 * until a player has 3 tokens in a row, a tie or the user run our places to
 * play. The program will then output the winner of the game or a tie
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		playerOne - Stores the name of the player using the X token
 * 		playerTwo - Stores the name of the player using the O token
 * 		menuChoice- Stores the choice from the menu single or multiplayer
 * OUTPUT:
 *		Outputs the winner through the function OutputWinner
 *****************************************************************************/

int main()
{
/******************************************************************************
 * CONSTANTS
 *****************************************************************************/

	const int MENU_COL   = 24;//Sets the width of the menu prompt
	const int MAX_SPACES = 9; //Sets the number spaces for the board

/******************************************************************************
 * VARIABLES
 *****************************************************************************/

	TicTicToe newBoard;
	char gameBoardAr[NUM_ROWS][NUM_COLS];//CALC - Used to create game board
	char gameToken;         //CALC      - token on game board(X or O)
	char winResults;        //CALC & OUT- Stores the winner or a tie
	int menuChoice;         //IN        - Store the menu choice value
	int turn;               //CALC      - tracks the number of turns played
	string playerOne;       //IN & OUT - Stores the player name of X token
	string playerTwo;       //IN & OUT - Stores the player name of the O token


	//INITIALIZATIONS
	winResults = ' ';
	menuChoice = 0;
	turn = 0;
	srand(time(NULL));

/******************************************************************************
 * OUTPUT - Class Heading
 *****************************************************************************/

	PrintClassHeader(cout, "TicTacToe", 2, 'A');

/******************************************************************************
 * INPUT - Prompts the user for a menu choice for single or multiplayer
 *****************************************************************************/

	cout << "Welcome to Tic Tac Toe. \n\n";

	//OutputInstruct - Will output the instructions for the game
	OutputInstruct();
	
	cout << "MAIN MENU\n";

	cout << "1 - Single Player mode\n";
	cout << "2 - Multiplayer mode\n";
	cout << "0 - Exit Game\n\n";

	cout << left;
	cout << setw(MENU_COL) << "Enter a choice to play!";
	cin  >> menuChoice;
	cin.ignore(1000, '\n');
	cout << right;
	cout << endl;

/******************************************************************************
 * PROCESSING - Based on the menu selection of the user they will be prompted
 * for the names of the players if in single player mode player two is the
 * computer. The program also gets and checks the inputs of each player then
 * checks for a win and outputs the winner
 *****************************************************************************/

	while (menuChoice != 0)
	{
		winResults = ' ';
		turn = 0;
		//InitBoard - Initializes the game board to all spaces
		InitBoard(gameBoardAr);

		switch (menuChoice)
		{
		             //GetPlayers - Prompts the players for their names
			case 1 : GetPlayers(playerOne, playerTwo, menuChoice);

			         //Assigns player one the token X
					 if (playerOne != playerTwo)
					 {
						 gameToken = 'X';
					 }
					 else
					 {
						 gameToken = 'O';
					 }

					 while (winResults == ' ' && turn != MAX_SPACES)
					 {
						 //DisplayBoard - Displays the game board
						 DisplayBoard(gameBoardAr);

						 if (gameToken == 'X')
						 {
							 //GetAndCheckInp - Gets and checks the input
							 GetAndCheckInp(gameBoardAr, gameToken, playerOne,
														     		playerTwo);
						 }
						 else
						 {
							 //GetCompPlay - Gets the play of the computer
							 GetCompPlay(gameBoardAr, gameToken, playerTwo);
						 }

						 //CheckWin - Checks for a winner or a tie
						 winResults = CheckWin(gameBoardAr);

						 //SwitchToken - Switches the token to pass turns
						 gameToken = SwitchToken(gameToken);

						 turn++;
					 }//End While(winResults == ' ' && turns != MAX_SPACES)

					 //DisplayBoard - Displays the game board
					 DisplayBoard(gameBoardAr);

					 //OutputWinner - Outputs the game winner
					 OutputWinner(winResults, playerOne, playerTwo);

				     break;

				     //GetPlayers - Prompts the players for their names
			case 2 : GetPlayers(playerOne, playerTwo, menuChoice);

			         //assigns playerOne the token X
					 if (playerOne != playerTwo)
					 {
						 gameToken = 'X';
					 }
					 else
					 {
					     gameToken = 'O';
					 }

					 while (winResults == ' ' && turn != MAX_SPACES)
					 {
						 //DisplayBoard - Displays the game board
						 DisplayBoard(gameBoardAr);

						 //GetAndCheckInp - Gets and checks the input
						 GetAndCheckInp(gameBoardAr, gameToken, playerOne,
							     								playerTwo);

						 //CheckWin - Checks for a winner or a tie
						 winResults = CheckWin(gameBoardAr);

						 //SwitchToken - Switches the token to pass turns
						 gameToken = SwitchToken(gameToken);

						 turn++;
					  }//End While(winResults == ' ' && turns != MAX_SPACES)

					  //DisplayBoard - Displays the game board
					  DisplayBoard(gameBoardAr);

      				  //OutputWinner - Outputs the game winner
					  OutputWinner(winResults, playerOne, playerTwo);

		 	 	      break;

			default : menuChoice = 0;
				 	  break;
		}//END switch(menuChoice)

/******************************************************************************
* INPUT - Prompts the user for a menu choice for single or multiplayer
*****************************************************************************/

		cout << "MAIN MENU\n";
		cout << "1 - Single Player mode\n";
		cout << "2 - Multiplayer mode\n";
		cout << "0 - Exit Game\n\n";

		cout << left;
		cout << setw(MENU_COL) << "Enter a choice to play!";
		cin  >> menuChoice;
		cin.ignore(1000, '\n');
		cout << right;
		cout << endl;

	}//End while(menuChoice != 0)
	return 0;
}
