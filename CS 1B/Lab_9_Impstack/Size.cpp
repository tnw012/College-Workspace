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
 * FUNCTION Size
 *=========================================================
 * This function receives a struct pointer pointing to a
 * stack and determines its size
 *
 * Returns : count
 *---------------------------------------------------------
 * PRE-CONDITIONS
 * head: has to be previously defined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  returns an integer value
 ***********************************************************/

int Size(PersonRec *head)//IN - Points to the top element in a stack
{
	int count;//CALC - Tracks the size of the stack
	PersonRec* ptr;//CALC - reference point to check the size of the stack

	//INITIALIZATIONS
	ptr = head;
	count = 0;

	//PROCESSING -
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return count;
}
