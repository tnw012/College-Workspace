#include<iostream>
#include<iomanip>
#include<string>
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
 * SECTION     : TTH-11am
 * ASSIGN_NUM  : '#'
 * ASSIGN_NAME : "Assignment/Project Name"
 *****************************************************************************/

	const string PROGRAMMER      = "Trevin Wolfe";
	const string CLASS	         = "CS1A";
	const string SECTION         = "TTH-11A";

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
