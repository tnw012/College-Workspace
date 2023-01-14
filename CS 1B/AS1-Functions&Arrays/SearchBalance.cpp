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
 * SearchBalance
 * ---------------------------------------------------------------------------
 *     This function will pass in an array of floats called balanceAr,
 * and then proceed to search for the smallest or largest value. Once the value
 * is found it is then returned back to the calling function as the index.
 * ---------------------------------------------------------------------------
 *****************************************************************************/

int SearchBalance(int option,     //IN - Passes an int for selection
		          float floatAr[],//IN - Passes array of floats
				  int arraySize)  //IN - Passes the size of the array
{
	float largest;  //IN & CALC - Stores the largest value after searching
	float smallest; //IN & CALC - Stores the smallest value after searching
	int resultIndex;//IN & CALC - Return the index to the calling function

	largest = floatAr[0];
	smallest = floatAr[0];
	resultIndex = 0;

/******************************************************************************
 * PROCESSING - Uses option to determine whether to look for the largest or
 * 				smallest value in the array that is passed in. It then returns
 * 				the index (as an int) of said value back to calling function
 *****************************************************************************/

	if (option == 1)
	{
		for (int index = 0; index < arraySize; index++)
		{
			if(floatAr[index] > largest)
			{
				largest = floatAr[index];
				resultIndex = index;
			}
		}//END for()
	}
	else
	{
		for (int index = 0; index < arraySize; index++)
		{
			if(floatAr[index] < smallest)
			{
				smallest = floatAr[index];
				resultIndex = index;

			}
		}//END for()
	}//END if (choice == 1)

	return resultIndex;
}
