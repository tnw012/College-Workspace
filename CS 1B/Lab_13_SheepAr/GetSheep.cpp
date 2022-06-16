/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #         : 13
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/3/19
 *****************************************************************************/
#include "lab13.h"

/******************************************************************************
 * FUNCTION GetSheep
 * ----------------------------------------------------------------------------
 * This function prompts the user for the name and age of a sheep
 *
 * RETURNS: sheepName & sheepAge (reference)
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:none
 *
 * POST-CONDITIONS:
 * 	   This function returns the name and age by reference
 *****************************************************************************/
void GetSheep(string &sheepName,//OUT - Stores the name of a sheep
			  int &sheepAge)    //OUT - Stores the age of a sheep
{
	const int PROMPT_WID = 12;
	const int AGE_MIN = 0;
	const int AGE_MAX = 9;

	//VARIABLES
	bool valid;	//CALC - Tracks whether the input is valid or not

	//INITIALIZATIONS
	valid = false;

/******************************************************************************
 * INPUT - Prompts the user for the name and the age of the sheep
 *****************************************************************************/

	cout << setw(PROMPT_WID) << "Sheep Name: ";
	getline(cin, sheepName);

	do
	{
		cout << left;
		cout << setw(PROMPT_WID) << "Sheep Age: ";

		//Error Checks the input for the sheep age
		if (!(cin >> sheepAge))
		{
			//Error checks the data type
			cout << endl;
			cout << "**** Please input an age between 0 and 9" << " ****"
				 << endl << endl;
			//prevent infinite loop
			sheepAge = -99;

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			valid = false;
		}
		else if (sheepAge < AGE_MIN || sheepAge > AGE_MAX)//Age boundaries
		{
			cout << endl;

			cout << "**** " << setw(ERROR_SIZE)
				 << "The age " + to_string(sheepAge) + " is an invalid entry"
				 << " ****" << endl;
			cout << "**** " << setw(ERROR_SIZE)
				 << "Please input an age between 0 and 9" << " ****"
				 << endl << endl;

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			valid = true;
		}//END if then else if(!(cin >> choice))

		cout << right;

	}while(!valid);
}







