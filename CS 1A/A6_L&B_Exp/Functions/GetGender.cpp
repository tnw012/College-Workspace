#include <iostream>
using namespace std;

/*****************************************************************************
 * Function - GetHeightAndWeight
 * ---------------------------------------------------------------------------
 * This function will prompt for a gender. It will then check and validate
 * the input.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		gender - Prompts the user for a gender
 * RETURNS:
 * 		gender - Returns the value of gender back to main
 *****************************************************************************/

char GetGender()
{
/*****************************************************************************
 * VARIABLES
 *****************************************************************************/

	char gender;		// Holds the value of the input
	bool invalidGender; // Checks and validates the input

	// Checks and validates gender
	do
	{

		cout << "Gender: ";
		cin.get(gender);
		cin.ignore(1000 , '\n');

		invalidGender = gender != 'm' && gender != 'M' &&
						gender != 'f' && gender != 'F' &&
						gender != 'x' && gender != 'X';

		if (invalidGender)
		{
			cout << "***** Invalid Gender; please enter M or F. *****\n";
		}
	}while(invalidGender);

	return gender;
}
