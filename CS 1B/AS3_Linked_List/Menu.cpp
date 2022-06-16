/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 3
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/6/19
 *****************************************************************************/
#include "as3.h"

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
	const int MENU_PROMPT = 29;
	const int MENU_MIN    = 0;
	const int MENU_MAX    = 6;

	//VARIABLES
	int choice;//IN  - Gets the choice of the user
	bool valid;//CALC- Tracks whether the input is valid or not


	//INITIALIZATIONS
	choice= 0;
	valid = false;

	//Outputs the menu and prompts the user for input
	do
	{
	cout << left;
	cout << "DVD MENU OPTIONS\n\n"
		 << "1 - Output Entire List\n"
		 << "2 - Title Search\n"
		 << "3 - Genre Search\n"
		 << "4 - Actor Search\n"
		 << "5 - Year Search\n"
		 << "6 - Rating Search (0-9)\n"
		 << "0 - EXIT\n";
	cout << setw(MENU_PROMPT) << "Enter an option (0 to exit):";

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
		valid = false;
	}
	else if (choice < MENU_MIN || choice > MENU_MAX)
	{

		cout << endl;

		cout << "**** " << setw(ERROR_SIZE)
			 << "The number " + to_string(choice) + " is an invalid entry"
		     << " ****" << endl;
		cout << "**** " << setw(ERROR_SIZE)
		     << "Please input a number between 0 and 6" << " ****"
			 << endl << endl;

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	else
	{
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << endl;
	}//END if then else if(!(cin >> choice))

	cout << right;
	valid = true;

	}while(!valid);

	return choice;
}
