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
 * FUNCTION GetSearchInput
 *=========================================================
 * This function receives a choice based on a menu option.
 * It then prompts the user for a for the item they would
 * like to search for and returns to the calling function
 * the string key or number key
 *
 * Returns : stringKey & numKey  by reference
 *---------------------------------------------------------
 * PRE-CONDITIONS
 *  choice : Has to to previously determined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function returns the values of stringKey or numKey
 ***********************************************************/

void GetSearchInput(string &stringKey,//OUT - Returns search key for a string
					int &numKey,   //OUT - Returns search key for an integer
					int choice)		  //IN  - Passes in a choice from a menu
{
	const int PROMPT_WIDTH = 34;
	const int RATING_MIN   = 1;
	const int RATING_MAX   = 9;
	const int YEAR_MIN     = 1878;
	const int YEAR_MAX     = 3000;

	//VARABLES
	bool valid;// CALC - Checks if the input is valid or not

	//INITIALIZATIONS
	valid = 0;

	switch(choice)
	{
		//Gets the search key for the a title
		case TITLE:
		{
			cout << setw(PROMPT_WIDTH) << "Which title are you looking for?";
			getline(cin, stringKey);
			cout << endl;

			cout << "Searching for the title " << stringKey << endl;

			break;
		}

		//Gets a search key for a genre
		case GENRE:
		{
			cout << setw(PROMPT_WIDTH) << "Which genre are you looking for?";
			getline(cin, stringKey);
			cout << endl;

			cout << "Searching for the genre " << stringKey << endl;
			break;
		}

		//Gets a search key for an actor
		case ACTOR:
		{
			cout << setw(PROMPT_WIDTH) << "Which actor are you looking for?";
			getline(cin, stringKey);
			cout << endl;

			cout << "Searching for the actor " << stringKey << endl;
			break;
		}

		//Gets a search key for a year
		case YEAR:
		{
			do
			{
				cout << setw(PROMPT_WIDTH)
					 << "Which year are you looking for?";
				//cout << endl;
//cerr << numKey;
				//Error checks the input
				if (!(cin >> numKey))
				{
					cout << endl;
					cout << "**** Please input a number between"
						 << " 1878 and 3000" << " ****"
						 << endl << endl;
					//prevent infinite loop
					//numKey = -99;

					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					valid = false;
				}
				else if (numKey < YEAR_MIN || numKey > YEAR_MAX)
				{
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << endl;
					cout << "**** The number " << numKey
						 << " is an invalid entry"
						 << " ****" << endl;
					cout << "**** " << setw(ERROR_SIZE)
						 << "Please input a number between 1878 and 3000"
						 << " ****"
						 << endl << endl;

					valid = false;
				}
				else
				{
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << endl;

					valid = true;
				}//END if then else if(!(cin >> numKey))
			}while(!valid);

			cout << "Searching for the year " << numKey << endl;

			break;
		}

		//Gets a search key for a rating
		case RATING:
		{
			do
			{
				cout << setw(PROMPT_WIDTH)
					 << "Which rating are you looking for?";
				cout << endl;

				//Error checks the input
				if (!(cin >> numKey))
				{
					cout << endl;
					cout << "**** Please input a number between 1 and 9"
						 << " ****"
						 << endl << endl;
					//prevent infinite loop
					//numKey = -99;

					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					valid = false;
				}
				else if (numKey < RATING_MIN || numKey > RATING_MAX)
				{
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << endl;
					cout << "**** The number " << numKey
						 << " is an invalid entry"
						 << " ****" << endl;
					cout << "**** " << setw(ERROR_SIZE)
						 << "Please input a number between 1 and 9"
						 << " ****"
						 << endl << endl;

					valid = false;
				}
				else
				{
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << endl;

					valid = true;
				}//END if then else if(!(cin >> numKey))
			}while(!valid);

			cout << "Searching for the ratings " << numKey << endl;
			break;
		}
	}//END switch(choice)
}




