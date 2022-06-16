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
 * OutputWinner
 * ----------------------------------------------------------------------------
 * This function receives as input a character indicating which player won
 * or if the game was a tie and outputs an appropriate message. This function
 * does not return anything as it simply outputs the appropriate message to
 * the screen.
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     whoWon : Passes in the token of the winner or a tie
 *     playerX: Indicates the player who was the X token as the winner
 *     playerO: Indicates the player who was the O token as the winner
 *
 * POST-CONDITIONS
 *      This function will  output the match winner
 *****************************************************************************/

void OutputWinner (char whoWon,   // IN - represents the winner or a value
                                  // indicating a tied game.
		           string playerX,// OUT - player X’s name
				   string playerO)// OUT - player O’x name
{
	if (whoWon == 'X')
	{
		//Output - The X token winner
		cout << playerX << " is the winner!\n\n";
	}
	else if (whoWon == 'O')
	{
		//Output - The O token winner
		cout << playerO << " is the winner!\n\n";
	}
	else
	{
		//Output - A tie if there is no winner
		cout << "The game is a draw\n\n";
	}
}
