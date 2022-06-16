/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Dylan Lackey
 * Student ID    : 1130500 &
 * LAB #         : 6
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 10/1/19
 *****************************************************************************/

#include "lab6.h"

int SearchForName (string findString,//IN - Passes in a string to be found
		           customerRecord customer[],  //IN - Passes Struct array of strings
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
		if (customer[index].cusName == findString)
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
