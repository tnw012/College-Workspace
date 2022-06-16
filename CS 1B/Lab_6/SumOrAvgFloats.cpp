/*****************************************************************************
 * AUTHORS       : Dylan Lackey
 * Student ID    : 1014845
 * Exercise      : ASN 1 - Functions and Arrays
 * CLASS         : CS1B
 * SECTION       : MW-7:30P
 * DUE DATE      : 9/17/19
 *****************************************************************************/

#include "lab6.h"
 /**********************************************************
	* FUNCTION SumOrAvgFloats
	*=========================================================
	* This function iterates through an array and either sums
	* or averages all values
	*---------------------------------------------------------
	* PRE-CONDITIONS
	* floatArray: struct of values to be summed
	* arSize	: size of float array
	*---------------------------------------------------------
	* POST-CONDITIONS
	* returnValue : Returns either the sum of all values
	***********************************************************/
float SumFloats(customerRecord customer[],	// IN - Array of float values
				int size)		// IN - Size of float array
{
	float total;		// Counter for all values
	float returnValue;	// Either the sum or average of all values
	
	total = 0.00;
	returnValue = 0.0;


	for (int index = 0; index < size; index++)
	{
		total += customer[index].cusBalance;
		returnValue = total;
	}// END for (int index = 0; index < size; index++)

	return returnValue;
}