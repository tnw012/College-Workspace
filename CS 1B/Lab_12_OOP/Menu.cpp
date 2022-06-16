/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * Student ID    : 1130500 , 276308
 * LAB #         : 12
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/21/19
 *****************************************************************************/
#include "lab12.h"

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
int Menu(int run)
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
	if (run == 0)
	{
		do
		{
			cout << left
				 << "1 - Initialize Animals\n"
				 << "0 - EXIT\n";
			cout << setw(MENU_PROMPT) << "Enter selection (0 to exit):";

			//Error checks the input
			if (!(cin >> choice))
			{
				cout << endl;
				cout << "**** Please input a number 0 or 1" << " ****"
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
					 << "Please input a number 0 or 1" << " ****"
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
	}
	else
	{
		do
		{
			cout << left
				 << "1 - Initialize Animals\n"
				 << "2 - Change Age\n"
				 << "3 - Change Value\n"
				 << "4 - Display\n"
				 << "0 - EXIT\n";
			cout << setw(MENU_PROMPT) << "Enter selection (0 to exit):";

			//Error checks the input
			if (!(cin >> choice))
			{
				cout << endl;
				cout << "**** Please input a number between 0 and 4" << " ****"
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
					 << "Please input a number between 0 and 4" << " ****"
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

	}//END if (run == 0)

	return choice;
}
