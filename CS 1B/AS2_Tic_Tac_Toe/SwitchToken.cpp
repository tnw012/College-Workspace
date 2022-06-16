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
 * SwitchToken
 * ----------------------------------------------------------------------------
 * This function switches the active player.
 * It takes in a parameter representing the current player's token
 * as a character value (either an X or an O) and returns the opposite.
 * For example, if this function receives an X it returns an 0. If it
 * receives and O it returns and X.
 *
 * RETURNS: The opposite token in which it received
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     token: Passes in a token to be switched
 *
 * POST-CONDITIONS
 *     Switches the token from X to O and vice versa O to X
 *****************************************************************************/

char SwitchToken(char token)// IN - current player’s token ('X' or 'O')
{
	//PROCESSING - Switches the tokens
	if (token != 'X')
	{
		token = 'X';
		return token;
	}
	else
	{
		token = 'O';
		return token;
	}
}
