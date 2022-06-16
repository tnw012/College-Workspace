/*****************************************************************************
* AUTHORS    : Trevin Wolfe & Sam Liimatainen
* Student ID : 1130500 & 276308
* LAB #9A    : Implementing a Queue
* CLASS      : CS1B
* SECTION    : MW 7:30pm
* DUE DATE   : 10/29/19
******************************************************************************/

#include "myheader.h"

 /**********************************************************
 * FUNCTION Menu
 *=========================================================
 * This function outputs a menu and prompts the user for a
 * choice and error checks the inputs displaying the proper.
 * error messages
 *
 * Returns : choice
 *---------------------------------------------------------
 * PRE-CONDITIONS
 * There are no pre conditions
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will return an integer value for a menu
 *  choice
 ***********************************************************/

int Menu()
{
	const int ERROR_SIZE = 37;//Sets the column width for the error message

	//VARIABLES
	int choice;//IN - Stores the value of the menu choice

	//INITIALIZATIONS
	choice = 0;

/******************************************************************************
 * INPUT - Outputs a menus and prompts the user for a choice. It then error
 * checks for a valid input and outputs a message if the input is wrong
******************************************************************************/

	cout << left;
	cout << "QUEUE MENU:" << endl;
	cout << "1 - ENQUEUE (Add a person)" << endl;
	cout << "2 - DEQUEUE (Remove a person)" << endl;
	cout << "3 - ISEMPTY (Is the stack empty?)" << endl;
	cout << "4 - FRONT (Who is in front?)" << endl;
	cout << "5 - SIZE (How many people are there?)" << endl;
	cout << "6 - Clear the Queue" << endl;
	cout << "0 - EXIT" << endl;
	cout << "Enter a command? ";

	//Error checks the input
	if (!(cin >> choice))
	{
		cout << endl;
		cout << "**** Please input a number between 0 and 6" << " ****"
			 << endl << endl;
		//prevent infinite loop
		choice = -99;

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} //END if (!(cin >> choice))
	else if (choice < 0 || choice > 7)
	{
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << endl;

		cout << "**** " << setw(ERROR_SIZE)
			 << "The number " + to_string(choice) + " is an invalid entry"
	         << " ****" << endl;
		cout << "**** " << setw(ERROR_SIZE)
			 << "Please input a number between 0 and 6" << " ****" << endl				 << endl;
	} //END else if (choice < 0 || choice > 5)
	else
	{
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << endl;
	}//END if then else if

	cout << right;

	return choice;
}// END void Menu()
