/*****************************************************************************
 * AUTHORS       : Dylan Lackey,	Trevin Wolfe
 * Student ID    : 1014845,			1130500
 * Exercise      : Lab 9 - Implementing a Stack
 * CLASS         : CS1B
 * SECTION       : MW-7:30P
 * DUE DATE      : 10/22/19
 *****************************************************************************/

#include "myheader.h"

 /**********************************************************
 * FUNCTION IsEmpty
 *=========================================================
 * This function receives a struct pointer pointing to a
 * stack and determines if the stack is empty or not using
 * a bool value
 *
 * Returns : checkEmpty
 *---------------------------------------------------------
 * PRE-CONDITIONS
 *  head: has to be previously defined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will return an true or false
 ***********************************************************/

bool IsEmpty(PersonRec *head)//IN - Points to the top element in a stack
{
	bool checkEmpty;

	checkEmpty = false;

	if (head == NULL)
	{
		checkEmpty = true;
	}

	return checkEmpty;
}
