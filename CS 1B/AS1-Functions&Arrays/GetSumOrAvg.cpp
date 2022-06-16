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
 * GetSumOrAvg
 * ---------------------------------------------------------------------------
 *     This function will pass in an array of floats. It will then calculate
 *     the sum of the array, or calculate the average of the array based
 *     on the option passed in.
 * ---------------------------------------------------------------------------
 *****************************************************************************/

float GetSumOrAvg(int option,     //IN - Passes an int for selection
		          float floatAr[],//IN - Passes in an array of floats
				  int arraySize)  //IN - Passes the size of the array
{
	const int MENU_OPTION = 3;//Sets the threshold for the if statement

	float total;//IN & CALC   - Stores the sum of the array
	float average;//IN & CALC - Stores the average of the array

	average = 0.0;
	total = 0.0;

/******************************************************************************
 * PROCESSING - Uses an if statement to run two separate for loops depending
 * 				on the option.
 *****************************************************************************/

	if(option == MENU_OPTION)
	{
		for (int index = 0; index < arraySize; index++)
		{
			total = total + floatAr[index];
		}

		return total;
	}
	else
	{
		for(int index = 0; index < arraySize; index++)
		{
			total = total + floatAr[index];
		}

		average = total / arraySize;
	}
	return average;
}
