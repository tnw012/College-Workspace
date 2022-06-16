/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Vishal Moodley
 * Student ID    : 1130500 , 10908383
 * LAB #10       : Pocket Money
 * CLASS         : CS1A
 * SECTION       : TTH-11am
 * DUE DATE      : 3/26/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*****************************************************************************
 * Pocket Money
 * ---------------------------------------------------------------------------
 * * This Program inputs the pocket change left over from the previous week and
 * the amount spent in the current week from the user and calculates how much
 *  pocket money is remaining. Each user is given $20 each week.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 	   name        - Name of the user entering the data.
 * 	   amtLeftOver - Amount left over from the previous week.
 * 	   spent       - the amount spent this week.
 *
 * OUTPUT:
 * 	   pocketMoney - The amount the user has in pocket change after calculating
 * 	   				 how much they spent.
 *     fullName    - User's full name
 *****************************************************************************/

int main ()
{
	/*************************************************************************
	 * CONSTANT
	 * -----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMERS :Trevin Wolfe & Vishal Moodley
	 * CLASS       : CS1A
	 * SECTION     : TTH-11am
	 * LAB_NUM     : Lab #10
	 * LAB_NAME    : Pocket Money
	 *************************************************************************/

	const char PROGRAMMER[31] = "Trevin Wolfe & Vishal Moodley";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[8]	  = "TTH-11A";
	const char LAB_NUM[6]	  = "10";
	const char LAB_NAME[21]   = "Pocket Money";

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
	 * CONSTANTS
	 *************************************************************************/

	const int PROMPT_COL = 35;
	const int DOLLARS = 20;

	/*************************************************************************
	 * VARIABLES
	 *************************************************************************/

	char fullName[25];    // IN. & OUT  - Value for the users name
    float amtLeftOver;    // IN. & CALC - Value for the amount leftover
    float spent;          // IN. & CALC - Value for the amount spent
    float pocketMoney;    // CALC & OUT - Value for money that is left.

	/*************************************************************************
	 * INPUT - The program will prompt the user for their name, amount
	 *         leftover, and spent.
	 *************************************************************************/

    // Prompts the user to enter their name.

    cout << left;
    cout << setw(PROMPT_COL) <<"what is your name? ";
    cin.getline(fullName, 25);

    // Prompts the user for the amount of money they have left.

    cout << setw(PROMPT_COL) <<"How much is left from last week? ";
    cin  >> amtLeftOver;
    cin.ignore(10000,'\n');

    // Prompts the user for the amount of money they have spent.

    cout << setw(PROMPT_COL) <<"How much have you spent? ";
    cin  >> spent;
    cin.ignore(10000,'\n');
    cout << right;
    cout << endl;


	/*************************************************************************
	 * PROCESSING - The program calculates the amount of pocket Money left.
	 *************************************************************************/

    pocketMoney = (DOLLARS + amtLeftOver) - spent;

    /*************************************************************************
     * OUTPUT - Hello "user's name"!
	 * 		    You now have $ "pocket money" left.
     *************************************************************************/

 	cout << setprecision(3) << showpoint;
    cout << "Hello " << fullName << '!' << endl;
 	cout << "You now have " << '$' << pocketMoney << " left.";
 	cout << endl << endl;
    cout << noshowpoint;


	return 0;

}
