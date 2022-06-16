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
 * OutputInstruct
 * ----------------------------------------------------------------------------
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     NONE
 *
 * POST-CONDITIONS
 *     Displays the instructions to the user
 *****************************************************************************/

void OutputInstruct()
{
	//Output - The instructions on how to play
	cout << "\tHOW TO PLAY\n";
    cout << "*************************************************************\n";
	cout << "Step 1: Pick an option from the menu provided.\n"
		 << "Step 2: Enter the names of players\n"
		 << "Step 3: Pick an empty spot to place your token.\n"
		 << "Step 4: Take turns until you have winner or tie.\n\n"
		 << "To place a token press an number for the row, press space bar\n"
		 << "and finally press another number for the column\n\n";
	cout << "*************************************************************\n\n";
}
