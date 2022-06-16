/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Dylan Lackey
 * Student ID    : 1130500 & 1014845
 * LAB #         : 6
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 10/1/19
 *****************************************************************************/

#include "lab6.h"
 /**********************************************************
   * FUNCTION FindExtremeValue
   *=========================================================
   * This function searches through an array for an extreme
   * value
   *---------------------------------------------------------
   * PRE-CONDITIONS
   * customer	: Name of struct to search through
   * arSize		: size of float array
   *---------------------------------------------------------
   * POST-CONDITIONS
   * returnIndex : Index of either largest value
   ***********************************************************/
int   FindExtremeValue(	customerRecord customer[],	//IN - Passes a struct array.
						int arSize)	// IN - Size of float array
{
	int returnIndex;	// Index of the extreme value

	float largest;		// temp largest value
	
	//set temporary largest / smallest values
	largest = customer[0].cusBalance;

	//set returnIndex
	returnIndex = 0;
	
	for (int index = 0; index < arSize; index++)
	{
		if (customer[index].cusBalance > largest)
		{
			largest = customer[index].cusBalance;
			returnIndex = index;
		}
	} // END  for (int index = 0; index < arSize; index++)
	
	return returnIndex;
}