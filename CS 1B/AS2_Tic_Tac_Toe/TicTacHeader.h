/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 2
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 10/11/19
 *****************************************************************************/

#ifndef TICTACTOE_H_
#define TICTACTOE_H_

//Pre-Processing Directives
#include <iostream>
#include <iomanip>
#include <ostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

//Global Constants
const int NUM_ROWS   = 3;//Sets the number of rows for the tic tac toe array
const int NUM_COLS   = 3;//Sets the number of columns for the tic tac toe array
const int PROMPT_COL = 28;//Sets the width when the program prompts for names

//User Defined Types go here

//Prototypes
/******************************************************************************
 * PrintClassHeader
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
void PrintClassHeader (ostream &output,//OUT - Passes where the header outputs
		               string asName,  //IN - Passes in the assignment name
					   int asNum,      //IN - Passes in the assignment number
					   char asType);   //IN - Passes the assignment type (L/A)

/******************************************************************************
* OutputInstruct
* -----------------------------------------------------------------------------
* This function outputs instructions to the users. There are no input
* or output parameters for this function as it only displays text to
* the screen.
*
* RETURNS: Nothing
* Displays the instructions to the user
*****************************************************************************/
void OutputInstruct();

/******************************************************************************
* InitBoard
* -----------------------------------------------------------------------------
* This function initializes each spot in the board to a space ' '.
*
* RETURNS: Board initialized with all spaces
*****************************************************************************/
void InitBoard(char boardAr[][NUM_COLS]);// OUT - tic tac toe board

/******************************************************************************
* DisplayBoard
* -----------------------------------------------------------------------------
* This function outputs the tic tac toe board including the tokens
* played in the proper format (as described below).
*
*      	  1		   2		3
* 		[1][1] | [1][2] | [1][3]
*              | 		|
*  1           | 		|
*              |        |
* 		--------------------------
* 		[2][1] | [2][2] | [2][3]
* 	           |        |
*  2           |        |
*              |        |
*       --------------------------
* 		[3][1] | [3][2] | [3][3]
*              |        |
*  3           |        |
*              |        |
*
* RETURNS: Nothing
* outputs the current state of the board
*****************************************************************************/
void DisplayBoard(const char boardAr[][NUM_COLS]);// IN - tic tac toe board

/******************************************************************************
* GetPlayers
* -----------------------------------------------------------------------------
* This function prompts the user and gets the input for the players’ names.
* playerX will always contain the name of the player that is using the X token.
* playerO will always contain the name of the player that is using the O token.
*
* RETURNS: the players names through the variables playerX and playerO.
*****************************************************************************/
void GetPlayers(string& playerX,// OUT - player X’s name
                string& playerO,//OUT - player O's name
				int choice);    //IN - Passes in an integer

/******************************************************************************
 * GetAndCheckInput
 * ----------------------------------------------------------------------------
 * This function passes in tic tac toe board and prompts the players to pick a
 * spot for there token. It then checks and validates the location on the board
 * then places the correct token on the board
 *
 * RETURNS: Nothing
 *****************************************************************************/
void GetAndCheckInp(char boardAr[][NUM_COLS],//IN - Passes in a 2-D array
		            char token,              //IN - token to be placed on board
					string playerX,          //IN - Prompts to play token X
					string playerO);         //IN - Prompts to play token O
/******************************************************************************
 * GetCompPlay
 * ----------------------------------------------------------------------------
 * This function passes in tic tac toe board and prompts the computer to pick a
 * spot for its token. It then checks and validates the location on the board
 * then places the token on the board
 *
 * RETURNS: Nothing
 *****************************************************************************/
void GetCompPlay(char boardAr[][NUM_COLS],//IN - Passes in a 2-D array
		         char token,              //IN - token to be placed on board
				 string playerO);         //IN - Passes in the CPU as a name
/******************************************************************************
* SwitchToken
* -----------------------------------------------------------------------------
* This function switches the active player.
* It takes in a parameter representing the current player's token
* as a character value (either an X or an O) and returns the opposite.
* For example, if this function receives an X it returns an 0. If it
* receives and O it returns and X.
*
* RETURNS: the token opposite of the one in which it receives.
*****************************************************************************/
char SwitchToken(char token);// IN - current player’s token ('X' or 'O')

/******************************************************************************
* CheckWin
* -----------------------------------------------------------------------------
* This function checks to see if either player has run. Once it is
* possible for a win condition to exist, this should run after each a
* player makes a play.
*
* RETURNS the character value of the player that won or a value that
* indicates a tie.
*****************************************************************************/
char CheckWin(const char boardAr[][NUM_COLS]);// IN - tic tac toe board

/******************************************************************************
* OutputWinner
* -----------------------------------------------------------------------------
* This function receives as input a character indicating which player won
* or if the game was a tie and outputs an appropriate message. This function
* does not return anything as it simply outputs the appropriate message to
* the screen.
*
* RETURNS: Nothing
* Displays the winner’s name
*****************************************************************************/
void OutputWinner(char whoWon,    // IN - represents the winner or a value
                                  // indicating a tied game.
                  string playerX, // OUT - player X’s name
                  string playerO);// OUT - player O’x name

#endif /* TICTACTOE_H_ */
