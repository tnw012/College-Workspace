/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #         : 13
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/3/19
 *****************************************************************************/
#include "lab13.h"

/******************************************************************************
 * FUNCTION PrintClassHeader
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	   output: Determines if the class header outputs to a file or the console
 * 	   asName: Assignment Name has to be defined in the calling function first
 * 	   asType: Assignment Type has to be defined in the calling function first
 * 	   asNum : Assignment Number has to be defined in the calling function
 * 	           first
 *
 * POST-CONDITIONS
 * 	   This function will output the class header
 *****************************************************************************/

void PrintClassHeader(ostream &output,//OUT - Passes where the header outputs
		              const string asName,//OUT - Passes in the assignment name
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
