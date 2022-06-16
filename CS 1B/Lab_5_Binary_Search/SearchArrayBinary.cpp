/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 *****************************************************************************/

#include "MyHeader.h"

int SearchArrayBinary(const int AR_SIZE,//IN - Size of array being passed
		              int intAr[],      //IN - Array of integers to be passed
					  int iKey)         //IN - Value being searched for
{
	int indexLocation; // The location of the ikey in the array
	int bottom;//Stores the value of the first index in the array
	int top;   //Stores the value of the last index in the array
	bool found;//Stores the value of false until key is found
	int mid;   //Stores the value of the middle index of the array

	indexLocation = 0;
	bottom = 0;
	top = AR_SIZE - 1;
	found = false;

	while(!found && bottom <= top)
	{
		mid = (bottom + top) / 2;

		if (intAr[mid] == iKey)
		{
			found = true;
			indexLocation = mid;
		}
		else if (intAr[mid] < iKey)
		{
			bottom = mid + 1;
		}else
		{
			top = mid - 1;
		}
	} // END while(!found && bottom <= top)

	if (!found)
	{
		indexLocation = -1;
	}

	return indexLocation;
}
