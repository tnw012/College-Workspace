/*******************************************************************************
* AUTHOR	 : Daniel Navarro & Trevin Wolfe
* STUDENT ID : 1023994		  & 1130500
* LAB #10	 : Creating an Ordered List
* CLASS		 : CS1B
* SECTION	 : MW: 7:30pm - 9:50pm
* DUE DATE	 : 11/4/19
******************************************************************************/
#include "header.h"

/*******************************************************************************
 * FUNCTION - GetAndCheck
 * -----------------------------------------------------------------------------
 * This function prompts the user for a menu option until a valid option is
 * obtained.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		No parameters needed.
 *
 * POST-CONDITIONS
 * 		==> Returns the validated user input menu option.
 ******************************************************************************/

MenuOption GetAndCheckInput()
{
	int		   option;     // IN  & OUT - user menu option
	bool	   valid;	   // CALC		- used to check if input is valid
	MenuOption userOption; // CALC		- converted user input to enum type

	valid = false;

	do {
		cout << "Enter a command? ";

		//PROCESSING - Checks if input is an integer
		if (!(cin >> option))
		{
			cout << "\n**** Please input a NUMBER between 0 and 5 ****\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		//PROCESSING - Checks if input is within range of the menu
		else if (option >= 0 && option <= 5)
		{
			valid = true;
		}
		//OUTPUT - Gives error message for any other inputs out of range
		else
		{
			cout << endl
				<< "**** The number " << option
				<< " is an invalid entry. ****" << endl;
			cout << "**** Please input a number between 0 and 5 ****\n\n";
		}
	} while (!valid);

	cout << endl;
	//PROCESSING - Converts then returns the menu option for the switch.
	return userOption = MenuOption(option);
}