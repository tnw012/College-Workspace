/*******************************************************************************
* AUTHOR	 : Daniel Navarro & Trevin Wolfe
* STUDENT ID : 1023994		  & 1130500
* LAB #10	 : Creating an Ordered List
* CLASS		 : CS1B
* SECTION	 : MW: 7:30pm - 9:50pm
* DUE DATE	 : 11/4/19
******************************************************************************/
#include "header.h"


 /**********************************************************
 * FUNCTION IsEmpty
 *=========================================================
 * This function receives a head pointer to a linked list
 * queue and determines if the queue is empty or not using
 * a boolean value
 *
 * Returns : checkEmpty
 *---------------------------------------------------------
 * PRE-CONDITIONS
 *  head: has to be previously defined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will return an true or false
 ***********************************************************/

bool IsEmpty(PersonNode* head)//IN - Points to the top element in a stack
{
	bool checkEmpty;

	checkEmpty = false;

	if (head == NULL)
	{
		checkEmpty = true;
	}

	return checkEmpty;
}
