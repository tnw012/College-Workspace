/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #14       : Boolean Expressions in C++ Problem 5
 * CLASS         : CS1A
 * SECTION       : TTH-11am
 * DUE DATE      : 4/23/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/*****************************************************************************
 * Program Name
 * ---------------------------------------------------------------------------
 * This program will
 * ---------------------------------------------------------------------------
 * INPUT:
 *
 * OUTPUT:
 *
 *****************************************************************************/

int main ()
{
	/*************************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMERS :Trevin Wolfe
	 * CLASS       : CS1A
	 * SECTION     : TTH-11am
	 * PROB_NUM    : 5
	 * PROB_NAME   : Boolean Expressions in C++
	 *************************************************************************/

	const char PROGRAMMER[31] = "Trevin Wolfe";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[8]	  = "TTH-11A";
	const char PROB_NUM[6]	  = "5";
	const char PROB_NAME[28]  = "Boolean Expressions in C++";

	const int PROMPT_COL = 27;

	/*************************************************************************
	 * VARIABLES
	 *************************************************************************/

	char classType[10];
	int rank;


	/*************************************************************************
	 * OUTPUT - CLASS HEADING
	 *************************************************************************/

	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  "	    << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "	    << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  PROB #"	<< setw(8)  << PROB_NUM   << ": " << PROB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/*************************************************************************
	 * INPUT -
	 *************************************************************************/

	cout << left;
	cout << setw(PROMPT_COL) << "Please enter a class rank:";
	cin  >> rank;
	cin.ignore(1000 , '\n');
	cout << right;

	while (rank >= 0)
	{
		rank <= 3 ? strncpy(classType , "Lower\n" , 10)
				  : rank <=6 ? strncpy(classType , "Middle\n" , 10)
				             : strncpy(classType ,  "Upper\n" , 10);

		cout << classType;

		cout << left;
		cout << setw(PROMPT_COL) << "Please Enter a class rank:";
		cin  >> rank;
		cin.ignore(1000 , '\n');
		cout << right;
	}

	cout << endl;
	cout << "Thank You!";

	/*************************************************************************
	 * PROCESSING -
	 *************************************************************************/


    /*************************************************************************
     * OUTPUT -
     *************************************************************************/

	return 0;
}
