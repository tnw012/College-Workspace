/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Daniel Navarro
 * Student ID    : 1130500 & 1023994
 * LAB #2        : Coin Toss
 * CLASS         : CS1B
 * SECTION       : MW 7:30p
 * DUE DATE      : 8/29/19
 *****************************************************************************/

#include "header.h"

/*****************************************************************************
 * Lab 2 - Coin Flip
 * ---------------------------------------------------------------------------
 * This program will get the user's name and gender, the program will then 
 * prompt the user for a flip of the coin (enter) until they get 3 heads in 
 * in a row. It will then output the the total flips and the average number 
 * of heads rolled.
 * ---------------------------------------------------------------------------
 * INPUT:
 *		userName  : Stores the value of the users name
		userGender: Stores the value of the users gender.
 * OUTPUT:
 *		totalFlips: Tracks the total number of flips
 *		numHeads  : Stores the average of number of heads
 *****************************************************************************/

int main()
{
/*****************************************************************************
 * CONSTANTS
 *****************************************************************************/
	const string AS_NAME   = "Coin Flip";
	const string GOOD_LUCK = "Good luck";
	const int	 AS_NUM    = 2;
	const char	 AS_TYPE   = 'L';

/*****************************************************************************
 * VARIABLES
 *****************************************************************************/
	
	bool   flip;       //CALC & CALC - Stores a true or false
	char   userGender; //IN & IN     - Stores the users gender
	float  avgWins;    //OUT & OUT   - Used to output the average # of wins
 	int	   userWins;   //IN & CALC	 - Tracks the total number of heads in a row
	int    totalFlips; //IN & CALC	 - Tracks the total number of flips
	int    numHeads;   //IN & CALC	 - Tracks the total number of heads
	string userName;   //IN & IN	 - Stores the users name
	

	numHeads   = 0;
	totalFlips = 0;
	userWins   = 0.0;


	srand(time(NULL));

	/*****************************************************************************
	  * OUTPUT - CLASS HEADING
	 *****************************************************************************/

	PrintClassHeader(AS_NAME, AS_NUM, AS_TYPE);

	cout << "Welcome to coin toss! Get 3 heads in a row to win!\n\n";

	/*****************************************************************************
	 * INPUT -
	 *****************************************************************************/

	GetUserInfo(userName, userGender);

	/*****************************************************************************
	 * PROCESSING -
	 *****************************************************************************/

	cout << "Try to get 3 heads in a row. ";

	if (userGender == 'M')
	{
		cout << GOOD_LUCK << " Mr. " << userName << '!' << endl << endl;
	}
		else
	{
		cout << GOOD_LUCK << " Ms." << userName << '!' << endl << endl;
	}

	flip = GetCoinFlip();

	while(userWins < 3)
	{
		if (flip == true)
		{
			totalFlips++;
			userWins++;
			numHeads++;
			if (userWins != 3)
			{
				flip = GetCoinFlip();
			}		
		}
		else
		{
			totalFlips++;
			userWins = 0;
			flip = GetCoinFlip();
		}
	}//END while(userWins != 3)

/*****************************************************************************
 * OUTPUT -
 *****************************************************************************/
	
	avgWins = GetAvgFlip(totalFlips, numHeads);

	OutputResult(totalFlips, avgWins);


	return 0;
}

 /*****************************************************************************
  * Get Average Coin Flip Function
  * ---------------------------------------------------------------------------
  * This function will process the average number of heads the user got in the
  * game they played.
  * ---------------------------------------------------------------------------
  *
  * PROCCESSING: avgHeads
  *
  *****************************************************************************/

float GetAvgFlip(int flips, int heads)
{
	float avgHeads;
	
	cout << setprecision(2) << fixed;
	avgHeads = float(heads) / flips * 100;
	cout << setprecision(6);
	cout.unsetf(ios::fixed);

	return avgHeads;
}

 /*****************************************************************************
  * Get Coin Flip Function
  * ---------------------------------------------------------------------------
  * This function will get a coin flip by using rand and choosing either 0 or 1
  * ---------------------------------------------------------------------------
  *
  * PROCCESSING: flipValue - used to get a value of 0 or 1 to indicate a coin
  * flip.
  *
  *****************************************************************************/

bool GetCoinFlip()
{
	int  flipValue;
	char enter;

	cout << "Press <enter> to flip";
	cin.get(enter);

	flipValue = rand() % 2;

	if (flipValue == 0)
	{
		cout << "HEAD\n";

		return true;
	}
	else
	{
		cout << "TAIL\n";
		return false;
	}
}

 /*****************************************************************************
  * Get User Info Function
  * ---------------------------------------------------------------------------
  * This function will get the users info in the form of a name, and a gender.
  * ---------------------------------------------------------------------------
  *
  * INPUT: name, gender
  *
  *****************************************************************************/

void GetUserInfo(string& name, char& gender)
{
	const int COL_WID = 27;

	cout << left;
	cout << setw(COL_WID) << "What is your name? ";
	getline(cin, name);

	do
	{
		cout << setw(COL_WID) << "What is your gender (m/f): ";
		cin.get(gender);
		cin.ignore(1000, '\n');
		cout << endl;

		gender = toupper(gender);

		if (gender != 'M' && gender != 'F')
		{
			cout << "Invalid gender please try again.\n";
		}

	} while (gender != 'M' && gender != 'F');
	cout << right;
}

 /*****************************************************************************
  * Print Class Header Function
  * ---------------------------------------------------------------------------
  * This function will output the class header to the program
  * ---------------------------------------------------------------------------
  * INPUT:
  *
  * OUTPUT: asNum, asType, asName
  *
  *****************************************************************************/

void PrintClassHeader(string asName, int	asNum, char asType)
{
	/*****************************************************************************
	 * CONSTANTS
	 * ----------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ----------------------------------------------------------------------------
	 * PROGRAMMERS : Trevin Wolfe
	 * CLASS       : CS1A
	 * SECTION     : TTH-11am
	 * ASSIGN_NUM  : '#'
	 * ASSIGN_NAME : "Assignment/Project Name"
	 *****************************************************************************/

	const string PROGRAMMER = "Trevin Wolfe & Daniel Navarro";
	const string CLASS = "CS1B";
	const string SECTION = "MW - 7:30pm";

	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  " << setw(14) << "CLASS" << ": " << CLASS << endl;
	cout << "*  " << setw(14) << "SECTION" << ": " << SECTION << endl;
	cout << "*  ";

	// PROCESSING - This will adjust the setw and format appropriately
	//              based on if this is a lab 'L' or assignment.
	if (toupper(asType) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}
	cout << asNum << ": " << asName << endl;
	cout << "**************************************************\n\n";
	cout << right;
}

 /*****************************************************************************
  * Output Result Function
  * ---------------------------------------------------------------------------
  * This function will output the result of the game once the user has reached
  * 3 consecutive heads in order to win the game.
  * ---------------------------------------------------------------------------
  *
  * PROCCESSING: flipValue - used to get a value of 0 or 1 to indicate a coin flip
  *
  *****************************************************************************/

void OutputResult(int totFlips, float avg)
{
	cout << endl;
	cout << "It took you " << totFlips << " tosses to get 3 heads in a row. \n"
		<< "On average you flipped heads " << avg << "% of the time \n";
}
