/*****************************************************************************
 * AUTHOR        : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #12       : Selection - Flo's Party Planner
 * CLASS         : CS1A
 * SECTION       : TTH-11am
 * DUE DATE      : 4/9/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/*****************************************************************************
 * Lab 12: Selection - Flo's Party Planner
 * ---------------------------------------------------------------------------
 * This program will get the guest name, age, and if they like chocolate. Based
 * on the input the program will calculate the snack type and beverage the
 * guests be allowed to have.
 * ---------------------------------------------------------------------------
 * INPUT: fullName    - Full name of guest attending the party.
 * 		  age         - The age of the guest attending the party.
 * 		  chocoChoice - Used to determine if the guests like chocolate or not.
 *
 * OUTPUT: snackType  - out the puts the type of the snack the guest can get.
 *         beverage   - determines the drink the guest can have.
 *****************************************************************************/

int main ()
{
	/*************************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMER  : Trevin Wolfe
	 * CLASS       : CS1A
	 * SECTION     : TTH-11am
	 * LAB_NUM     : Lab #12
	 * LAB_NAME    : Selection - Flo's Party Planner
	 *************************************************************************/

	const char PROGRAMMER[31] = "Trevin Wolfe";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[8]	  = "TTH-11A";
	const char LAB_NUM[6]	  = "12";
	const char LAB_NAME[34]   = "Selection - Flo\'s Party Planner";

	/*************************************************************************
	 * OUTPUT - CLASS HEADING
	 *************************************************************************/

	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  "	    << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "	    << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  LAB #"	<< setw(9)  << LAB_NUM    << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/*************************************************************************
	 * DECLARATION SECTION / DATA TABLE
	 *************************************************************************/

	const int PROMPT_COL = 30; // IN & CALC - Used to set the column for input.
	const int LEGAL_AGE  = 21; // CALC      - Sets the upper age limit.
	const int JUICE_AGE  = 5;  // CALC      - sets the lower age limit.

	char fullName[20];		   // IN & OUT  - Stores the name of the guest.
	char chocoChoice;          // CALC      - (Y/N) if they like chocolate.
	char nutChoice;            // CALC      - (Y/N) if they like nuts.
	char snackType[15];        // OUT       - The snack type the guest gets.
	char beverage [6];         // OUT       - The beverage the guest gets.

	int age;                   // IN & CALC - Stores the age of the guest.
	int friendCount;           // CALC      - LCV for the for loop.

	/*************************************************************************
	 * INPUT - Prompts the user for the guests name, age , and if they
	 * 		   like chocolate or not.
	 *************************************************************************/

	for (friendCount = 1 ; friendCount <= 9 ; friendCount = friendCount + 1)
	{
		cout << left;
		cout << setw(PROMPT_COL) << "What is your friend\'s name?";
		cin.getline(fullName , 20);

		cout << setw(PROMPT_COL) << "How old is your friend?";
		cin  >> age;
		cin.ignore(1000 , '\n');

		cout << setw(PROMPT_COL) << "Do they like Chocolate (Y/N)?";
		cin.get(chocoChoice);
		cin.ignore(1000 , '\n');

	/*************************************************************************
	 * PROCESSING - Decides which snack type to give the guest based on if they
	 * 				like chocolate and nuts. It also decides which beverage the
	 * 				guest is allowed to have based on age.
	 *************************************************************************/

		if (chocoChoice == 'Y')
		{
		   cout << setw(PROMPT_COL) << "Do they like nuts (Y/N)?";
		   cin.get(nutChoice);
		   cin.ignore(1000 , '\n');
		   cout << right;

		   if (nutChoice == 'Y')
		   {
			   strncpy(snackType , "Peanut M & M\'s" , 15);
		   }
		   else
		   {
			   strncpy(snackType , "M & Ms" , 15);
		   }
		}
		else
		{
			strncpy(snackType , "skittles", 15);
		}

		if (age < LEGAL_AGE)
		{
			if (age <= JUICE_AGE)
			{
				strncpy (beverage , "juice" , 6);
			}
			else
			{
				strncpy (beverage , "soda" , 6);
			}
		}
		else
		{
			strncpy(beverage , "wine" , 6);
		}

    /*************************************************************************
     * OUTPUT  - The name of the guest and what they are served.
     *
     * example - "Trevin Wolfe should be served skittles and soda."
     *************************************************************************/

	cout << endl;
	cout << fullName << " should be served " << snackType << " and "
		 << beverage << ".\n" << endl << endl;
	}

	return 0;
}
