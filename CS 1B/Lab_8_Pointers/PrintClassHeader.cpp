#include "MyHeader.h"
/*************************************************************************
 *
 * FUNCTION PrintHeaderUsingOSS
 * _______________________________________________________________________
 * 	This function takes in
 * 		- asName (string) assignment/lab name
 * 		- asType (char) L for lab and A for assignment
 * 		- asNum  (int) the number of the A or L
 *
 * 	The function will return as string and can be output to console
 * 	or text file.
 * _______________________________________________________________________
 * PRE-CONDITIONS
 * 		- asNum must be defined in main
 * 		- asType must be defined in main
 * 		- asNum must be defined in main
 *
 *
 * POST- CONDITIONCS
 *
 **************************************************************************/

 // INFORMATION TO PASTE IN MAIN:
 /*************************************************************************
 *	 	* CONSTANTS
 *	 	* -----------------------------------------------------------------
 *	 	* OUTPUT - USED FOR CLASS HEADING
 *	 	* -----------------------------------------------------------------
 *	 	* ASSIGNMENT_NAME - Lab or Assignment name
 *	 	* ASSIGNMENT_TYPE - A for assignment , L for Lab
 *	 	* ASSIGNMENT_NUM  - Number of Lab or Assignment
 *	 	*
 *	 	********************************************************************
 *		const string ASSIGNMENT_NAME = "Insert title here";
 *		const char   ASSIGNMENT_TYPE = 'A' or 'L';
 *		const int    ASSIGNMENT_NUM  = integer value;
 ***************************************************************************/

string PrintHeaderUsingOSS (string     asName, // IN - assignment Name
				            char       asType, // IN - assignment type
				            int         asNum) // IN - assignment number
{
	ostringstream output;

   /************************************************************************
	* OUTPUT - CLASS HEADING
	************************************************************************/
	output << left;
	output << "**************************************************\n";
	output << "*  PROGRAMMED BY : Sam Liimatainen & Trevin Wolfe\n";
	output << "*  " << setw(14) << "STUDENT ID" << ": 276308\n";
	output << "*  " << setw(14) << "CLASS"      << ": CS1B --> MW - 7:30P\n";
	output << "*  ";

	if (toupper (asType) == 'L')
	{
		output << "Lab #" << setw(9);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	}
	output << asNum << ": " << asName << endl;
	output << "**************************************************\n\n";
	output << right;


	return output.str();

}
