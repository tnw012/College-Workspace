/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 1
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 9/17/19
 *****************************************************************************/

#include "as1.h"

/******************************************************************************
 * PrintClassHeader
 * ---------------------------------------------------------------------------
 *     This function outputs the class header either to a file or console
 *     this is determined through the parameter output.
 * ---------------------------------------------------------------------------
 *****************************************************************************/

void PrintClassHeader(ostream &output,//OUT - Passes where the header outputs
		              string asName,  //OUT - Passes in the assignment name
					  int asNum,      //OUT - Passes in the assignment number
					  char asType)    //OUT - Passes the assignment type (L/A)
{
/*****************************************************************************
 * CONSTANTS
 * ----------------------------------------------------------------------------
 * OUTPUT - USED FOR CLASS HEADING
 * ----------------------------------------------------------------------------
 * PROGRAMMERS : Trevin Wolfe
 * CLASS       : CS1B
 * SECTION     : MW - 7:30pm
 * ASSIGN_NUM  : 1
 * ASSIGN_NAME : "Functions and Arrays"
 *****************************************************************************/

	const string PROGRAMMER = "Trevin Wolfe";
	const string CLASS      = "CS1B";
	const string SECTION    = "MW - 7:30pm";

	output << left;
	output << "**************************************************\n";
	output << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	output << "*  "	      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	output << "*  "	      << setw(14) << "SECTION"  << ": " << SECTION  << endl;
   	output << "*  ";

   	// PROCESSING - This will adjust the setw and format appropriately
  	//              based on if this is a lab 'L' or assignment.
   	if (toupper(asType) == 'L')
   	{
   		output << "LAB #" << setw(9);
   	}
   	else
   	{
   		output << "ASSIGNMENT #" << setw(2);
   	}
   	output << asNum << ": " << asName << endl;
	output << "**************************************************\n\n";
	output << right;
}
