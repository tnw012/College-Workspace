/*******************************************************************************
* AUTHOR	 : Daniel Navarro & Trevin Wolfe
* STUDENT ID : 1023994		  & 1130500
* LAB #10	 : Creating an Ordered List
* CLASS		 : CS1B
* SECTION	 : MW: 7:30pm - 9:50pm
* DUE DATE	 : 11/4/19
******************************************************************************/
#include "header.h"

/*******************************************************************************
 * FUNCTION - PrintHeader
 * -----------------------------------------------------------------------------
 * This function receives the assignment name, assignment number, and type then
 *	outputs the appropriate header to console or output file.
 * -----------------------------------------------------------------------------
 * asName : assignment name
 * asNum  : assignment number
 * asType : assignment type
 * 'L' for Labs
 * 'A' for Assignments
 *
 * VOID, Returns nothing. This function will output the class heading to console
 *	or output file.
 ******************************************************************************/
void PrintHeader(ostream& output, // IN & OUT - output display type
				 string asName,	  // IN - assignment name
				 int asNum,		  // IN - assignment number
				 char asType)	  // IN - assignment type L or A
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - Used for class heading.
	 * ------------------------------------------------------------------------
	 * LAB_SIZE	   : used to setw for labs
	 * ASSIGN_SIZE : used to setw for assignments
	 * COL_SIZE	   : used to setw for the columns
	 * PROGRAMMER  : Creator of the project
	 * CLASS	   : Current programming class of the semester.
	 * SECTION	   : Time when class meets.
	 * ID_NUM	   : Student's ID number.
	 **************************************************************************/

	const int    LAB_SIZE	 = 9;
	const int    ASSIGN_SIZE = 2;
	const int    COL_SIZE    = 14;
	const string PROGRAMMER  = "Daniel Navarro & Trevin Wolfe";
	const string CLASS		 = "CS1B";
	const string SECTION	 = "MW: 7:30pm - 9:50pm";
	const string ID_NUM		 = "1023994 & 1130500";

	
	output << left;
	output << "**************************************************\n";
	output << "* PROGRAMMED BY : "   << PROGRAMMER   << endl;
	output << "* " << setw(COL_SIZE) << "STUDENT ID" << ": " << ID_NUM  << endl;
	output << "* " << setw(COL_SIZE) << "CLASS"      << ": " << CLASS   << endl;
	output << "* " << setw(COL_SIZE) << "SECTION"    << ": " << SECTION << endl;
	output << "* ";
	/********************************************************************
	* PROCESSING - Using an IF then ELSE statement to select if the
	*			   its an Assignment or a Lab
	********************************************************************/
	if (toupper(asType) == 'L')
	{
		output << "LAB #" << setw(LAB_SIZE);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(ASSIGN_SIZE);
	}
	output << asNum << ": " << asName << endl;
	output << "**************************************************\n\n";
	output << right;
}