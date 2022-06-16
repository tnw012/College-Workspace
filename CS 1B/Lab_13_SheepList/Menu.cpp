/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #         : 13
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/3/19
 *****************************************************************************/
#include "lab13.h"

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
		cout << left
			 << "1 - Add Sheep\n"
			 << "2 - Output 1st Sheep\n"
			 << "3 - Find Sheep\n"
			 << "4 - List Size\n"
			 << "5 - Output List\n"
			 << "6 - Clear List\n"
			 << "0 - EXIT\n";
		cout << setw(MENU_PROMPT) << "Enter a command (0 to exit):";

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
			valid = true;
		}//END if then else if(!(cin >> choice))

		cout << right;

	}while(!valid);


	return choice;
}
