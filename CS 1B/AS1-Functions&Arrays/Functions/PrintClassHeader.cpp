#include <iostream>
#include <iomanip>
#include <string>
#include "Functions.h"
using namespace std;

void PrintClassHeader (string asName, int asNum, char asType)
{
/*****************************************************************************
 * CONSTANTS
 * ----------------------------------------------------------------------------
 * OUTPUT - USED FOR CLASS HEADING
 * ----------------------------------------------------------------------------
 * PROGRAMMERS : Trevin Wolfe
 * CLASS       : CS1A
 * SECTION     : MW-7:30pm
 * ASSIGN_NUM  : '#'
 * ASSIGN_NAME : "Assignment/Project Name"
 *****************************************************************************/

	const string PROGRAMMER      = "Trevin Wolfe";
	const string CLASS	         = "CS1B";
	const string SECTION         = "MW-7:30pm";

	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  "	      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "	      << setw(14) << "SECTION"  << ": " << SECTION  << endl;
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
