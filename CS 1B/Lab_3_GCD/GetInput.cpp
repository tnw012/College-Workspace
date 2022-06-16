/******************************************************************************
 * AUTHOR     : Trevin Wolfe & Julian Lasting
 * STUDENT ID : 1130500 & 1097778
 * LAB #3     : Functions - Greatest Common Divisor
 * CLASS      : CS1B
 * SECTION    : MW - 7:30pm
 * DUE DATE   : 11/14/2019
 *****************************************************************************/

#include "gcd.h"

/******************************************************************************
 * FUNCTION GetInput
 * ----------------------------------------------------------------------------
 * This function gets from the user two different integer values
 *
 * RETURNS: valueOne & valueTwo by reference
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	   There are no pre-conditions for this function
 * POST-CONDITIONS
 * 	   This function will return two different integers
 *****************************************************************************/

void GetInput(int& valueOne, //OUT - Stores the first integer
		      int& valueTwo) //OUT - Stores the second integer
{
	const int INPUT_WIDTH = 28;

/******************************************************************************
 * INPUT - Prompts the user for to integer values
 *****************************************************************************/

	cout << left;
	cout << setw(INPUT_WIDTH) << "Enter the first integer: ";
	cin >> valueOne;
	cout << setw(INPUT_WIDTH) << "Enter the second integer: ";
	cin >> valueTwo;
	cout << endl;
}
