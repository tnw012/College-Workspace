/*****************************************************************************
 * AUTHORS       : Dylan Lackey,	Trevin Wolfe
 * Student ID    : 1014845,			1130500
 * Exercise      : Lab 9 - Implementing a Stack
 * CLASS         : CS1B
 * SECTION       : MW-7:30P
 * DUE DATE      : 10/22/19
 *****************************************************************************/


#include "myheader.h"

/*****************************************************************************
 * Implementing a Stack
 * ---------------------------------------------------------------------------
 * This program will output a menu and prompt the user for a menu choice. Based
 * on the menu choice from the user the program will then either add and
 * element,delete an element, view the top element, or peek at the top element
 * of the stack. The program can also check the size of the stack or if it is
 * empty.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		Menu() - Used for getting information from the user
 * 		Push() - Adds a new element to the stack
 * OUTPUT:
 * 		Peek() - Outputs the top element in stack
 * 		Pop () - Removes the top element in stack
 *
 *****************************************************************************/
int main()
{
	//Function StreamOutputClassHeader - Outputs the class header
	StreamOutputClassHeader(cout, 9, "Implementing a Stack", 'L');

	//Function Menu - Outputs the menu and does all the main processing
	Menu();

	cout << "Thank you for using my program.";

	return 0;
}
