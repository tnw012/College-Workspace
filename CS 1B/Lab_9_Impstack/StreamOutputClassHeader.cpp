/*****************************************************************************
 * AUTHORS       : Dylan Lackey,	Trevin Wolfe
 * Student ID    : 1014845,			1130500
 * Exercise      : Lab 9 - Implementing a Stack
 * CLASS         : CS1B
 * SECTION       : MW-7:30P
 * DUE DATE      : 10/22/19
 *****************************************************************************/


#include "myheader.h"
 /**********************************************************
 * FUNCTION StreamOutputClassHeader
 *=========================================================
 * This function receives a stream variable, an assignment
 * name, type and number then outputs the appropriate
 * header - returns nothing.
 *---------------------------------------------------------
 * PRE-CONDITIONS
 * output : Output stream variable
 * labName: Assignment Name has to be previously defined
 * labType: Assignment Type has to be previously defined
 * asnType: Assignment Number has to be previously defined
 *
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will output the class heading to either
 *		console or file.
 ***********************************************************/
void StreamOutputClassHeader(ostream &output,	// IN - Stream variable
							 int labNum,		// IN - Assignment number
							 string labName,	// IN - Assignment name
							 char asnType)// IN - Assignment type
{
	/**************************************************************************
	 * This function uses the ostream datatype to allow the dynamic use of
	 * stream types to determine where the class heading in the function will
	 * be output, whether to console or file.
	 **************************************************************************/
	asnType = toupper(asnType);

	output << left;
	output << "*******************************************************\n";
	output << "*	PROGRAMMED BY : " 	<< "Dylan Lackey & Trevin Wolfe" << endl;
	output << "*	" << setw(14)		<< "CLASS"	 << ": CS1B"	<< endl;
	output << "*	" << setw(14)		<< "SECTION" << ": MW: 7:30pm - 9:50pm";
	output << endl;
	if(asnType == 'A')
	{
	output << "*	ASSIGNMENT #" << setw(2)		<< labNum	<< ": "	<<
			labName << endl;
	}
	else if(asnType == 'L')
	{
	output << "*	LAB #" 		  << setw(9)		<< labNum	<< ": "	<<
			labName << endl;
	}
	else
	{
	output << "*	EXTRA CREDIT  : " << labName << endl;

	}
	output << "*******************************************************\n\n";
	output << right;

}




