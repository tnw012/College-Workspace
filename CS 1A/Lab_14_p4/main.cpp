/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #10       : Boolean Expressions in C++
 * CLASS         : CS1A
 * SECTION       : TTH-11am
 * DUE DATE      : 4/23/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*****************************************************************************
 * Boolean Expressions in C++
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
	 * LAB_NUM     : Lab #15
	 * LAB_NAME    : Boolean Expressions in C++
	 *************************************************************************/

	const char PROGRAMMER[31] = "Trevin Wolfe";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[8]	  = "TTH-11A";
	const char PROB_NUM[6]	  = "4";
	const char LAB_NAME[28]   = "Boolean Expressions in C++";

	/*************************************************************************
	 * VARIABLES
	 *************************************************************************/

	char classCode;
	bool invalid;

	/*************************************************************************
	 * OUTPUT - CLASS HEADING
	 *************************************************************************/

	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  "	    << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "	    << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  PROB #"	<< setw(8)  << PROB_NUM   << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/*************************************************************************
	 * INPUT -
	 *************************************************************************/
	do
	{
		cout << "Enter a class code (F/S/J/R). ";
		cin.get(classCode);
		cin.ignore(1000 , '\n');

		classCode = toupper(classCode);

		invalid = classCode != 'F' &&
				  classCode != 'S' &&
				  classCode != 'J' &&
				  classCode != 'R' &&
				  classCode != 'X';

		if (invalid)
		{
			cout << classCode << " is an INVALID INPUT - "
				 <<	"Please try again! \n\n";
		}
	}while(invalid);

	while (classCode != 'X')
	{
		do
		{
			cout << "Enter a class code (F/S/J/R). ";
			cin.get(classCode);
			cin.ignore(1000 , '\n');

			classCode = toupper(classCode);

			invalid = classCode != 'F' &&
					  classCode != 'S' &&
				      classCode != 'J' &&
				      classCode != 'R' &&
					  classCode != 'X';

			if (invalid)
			{
				cout << endl;
				cout << classCode << " is an INVALID INPUT - "
				     <<	"Please try again! \n\n";
			}
		}while(invalid);
	}

	cout << endl;
	cout << "Thank You!";

	/**************************************************************************
	 * PROCESSING -
	 *************************************************************************/



    /*************************************************************************
     * OUTPUT -
     *************************************************************************/

	return 0;
}
