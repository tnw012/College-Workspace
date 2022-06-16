/*****************************************************************************
* AUTHORS    : Trevin Wolfe & Sam Liimatainen
* Student ID : 1130500 & 276308
* LAB #9A    : Implementing a Queue
* CLASS      : CS1B
* SECTION    : MW 7:30pm
* DUE DATE   : 10/29/19
******************************************************************************/

#include "myheader.h"

 /**********************************************************
 * FUNCTION Size
 *=========================================================
 * This function receives a pointer pointing the head node
 * in a linked list and determines its size
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
