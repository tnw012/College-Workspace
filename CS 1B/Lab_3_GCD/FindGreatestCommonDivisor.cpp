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
 * FUNCTION FindGreatestCommonDivisor
 * ----------------------------------------------------------------------------
 * This function passes in two different integer values and finds the greatest
 * common divisor using recursion
 *
 * RETURNS: greatestCommonDivisor
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	   valueOne: has to be previously defined
 * 	   valueTwo: has to be previously defined
 * POST-CONDITIONS
 * 	   This function will return the great common divisor of two integers
 *****************************************************************************/


int FindGreatestCommonDivisor(int valueOne,//IN -Passes in the first integer
		                      int valueTwo)//IN -Passes in the second integer
{
/******************************************************************************
 * VARIABLES
 *****************************************************************************/

	int	dividend;             //CALC - Stores the values that being divided
	int	divisor;              //CALC - Stores the values that do the dividing
	int	remainder;            //CALC - Stores the value of the remainder
	int greatestCommonDivisor;//CALC - Stores the value of the GCD


	greatestCommonDivisor = 0;

	//Sets the larger value as the dividend
	if (valueOne > valueTwo)
	{
		dividend = valueOne;
		divisor = valueTwo;
	}
	else
	{
		dividend = valueTwo;
		divisor = valueOne;
	}

	if (divisor == 0)
	{
		cout << "Can't divide by 0!" << endl;

		greatestCommonDivisor = -1;

		return greatestCommonDivisor;
	}

/*****************************************************************************
 * PROCESSING - Divides the dividend by the divisor. If if the remainder is
 * equal to 0 then the program outputs the greatest common divisor. If the
 * the remainder is not equal to zero then the program uses recursion to find
 * the greatest common divisor.
 *****************************************************************************/
	remainder = dividend % divisor;


	if (remainder == 0) // BASE CASE
	{
		greatestCommonDivisor = divisor;
		return greatestCommonDivisor;
	}
	else
	{
		// RECURSIVE CASE
		dividend  = divisor;
		divisor   = remainder;

		greatestCommonDivisor = FindGreatestCommonDivisor(dividend, divisor);
	}

	return greatestCommonDivisor;
}
