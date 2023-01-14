/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 *****************************************************************************/

#include "MyHeader.h"

void OutputArray(const int AR_SIZE,//IN - Size of the array
		         int intAr[])      //IN - Passes in an array of integers
{
	// Output the values for each index in the array
	for (int index = 0; index < AR_SIZE; index++)
	{
		cout << "Index #" << index << ": " << intAr[index];
		cout << endl;
	}
}
