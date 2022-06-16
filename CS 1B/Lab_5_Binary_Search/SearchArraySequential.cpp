/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 *****************************************************************************/

#include "MyHeader.h"

int SearchArraySequential(const int AR_SIZE,//IN - Size of array being passed
		                  int intAr[],      //IN - Array of integers passed
						  int ikey)         //IN - Value being searched for
{
	bool found;//Tracks whether ikey has been found or not
	int index; //Tracks the index of the array

	index = 0;
    found = false;

	while (!found && index < AR_SIZE)
	{
		if (intAr[index] == ikey)
		{
			found = true;
		}
		else
		{
			index++;
		}
	}

	if (!found)
	{
		index = -1;
	}

	return index;

}
