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
 * SearchForName
 * ---------------------------------------------------------------------------
 *     This function will pass in an array of strings and prompt the user for
 *     a name to search for. If the name is found it will output to console
 *     "found.". if the name is not found it will output to console "not found."
 * ---------------------------------------------------------------------------
 *****************************************************************************/

int SearchForName (string findString,//IN - Passes in a string to be found
		           string stringAr[],//IN - Passes array of strings
		           int arraySize)    //IN - Passes the size of the array
{
	bool found;     //IN & CALC  - Tracks whether the name is found or not
	int index;      //IN & CALC  - Stores location inside of an array
	int stringIndex;//CALC & OUT - Returns index back to calling function


	found = false;
	index = 0;
	stringIndex = -1;

/******************************************************************************
 * PROCESSING - Uses a while loop to search through an array of strings to
 * 				locate a name it then returns that value as an index to
 * 				the calling function.
 *****************************************************************************/

	while(index < arraySize && !found)
	{
		if (stringAr[index] == findString)
		{
			stringIndex = index;
			found = true;
		}
		else
		{
			index++;
		}
	}//END while(index < arraySize && !found)

	return stringIndex;
}
