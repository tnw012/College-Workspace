/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 *****************************************************************************/

#include "MyHeader.h"

void SortAnArrayInsertionSort(const int AR_SIZE,//IN - Size of array passed
		                      int intAr[])      //IN - Array of integers
{

	int temp;//Stores the value of a temporary index
	int j;   //Stores the value of the index through the while loop

	for (int index = 1; index < AR_SIZE; index++)
	{
		temp = intAr[index];
		j = index - 1;

			while (j >= 0 && intAr[j] > temp)
			{
				intAr[j + 1] = intAr[j];
				j = j - 1;
			} // END while (j >= 0 && intAr[j] > temp)

		intAr[j + 1] = temp;

	} // END for (int i = 1; i < AR_SIZE; i++)

}
