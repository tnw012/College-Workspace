/*****************************************************************************
 * AUTHORS       : Sam Liimatainen & Trevin Wolfe
 * Student ID    : 276308 & 1130500
 * LAB #8        : Introduction to Programming
 * CLASS         : CS1A
 * SECTION       : TTH-11A
 * DUE DATE      : 3/12/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*****************************************************************************
 * INTRO INTO PROGRAMMING
 * ---------------------------------------------------------------------------
 * This program will read in two values and output the sum.
 * ---------------------------------------------------------------------------
 * INPUT:
 *       firstNum   - First value to be summed.
 *       secondNum  - Second value to be summed.
 * OUTPUT:
 *       sum - The sum of the two values input.
 *****************************************************************************/

int main ()
{
	/*************************************************************************
	 * CONSTANT
	 * -----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMERS : Sam Liimatainen & Trevin Wolfe
	 * CLASS       : CS1A
	 * SECTION     : TTH-11A
	 * LAB_NUM     : Lab 8
	 * LAB_NAME    : Intro to Programming
	 *************************************************************************/

	const char PROGRAMMER[31] = "Sam Liimatainen & Trevin Wolfe";
	const char CLASS[5]		  = "CS1A";
	const char SECTION[8]	  = "TTH-11A";
	const char LAB_NUM[6]	  = "8";
	const char LAB_NAME[21]   = "Intro to Programming";

	int firstNum;			  // IN. CALC & OUT - First value to sum
	int secondNum;			  // IN. CALC & OUT - Second value to sum
	int sum;				  // CALC & OUT     - sum of 2 integers input

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
	 * INPUT - reads in two inputs from the user (firstNum & secondNum )
	 *************************************************************************/

	cout << "Enter the first integer: ";
	cin  >> firstNum;

	cout << "Enter the second integer: ";
	cin  >> secondNum;

	/*************************************************************************
	 * PROCESSING - Calculates the sum of the two inputs
	 *************************************************************************/

	sum = firstNum + secondNum;

    /*************************************************************************
     * OUTPUT - the input and the sum in the following format:
     * 					  firstNum + secondNum = sum
     *
     *   For example, if firstNum = 32 & secondNum = 41 output will be:
     *
     *   		          32 + 41 = 73
     *************************************************************************/

	cout << endl << endl;
    cout << firstNum  << " + "<< secondNum << " = " << sum << endl;

    return 0;
}
