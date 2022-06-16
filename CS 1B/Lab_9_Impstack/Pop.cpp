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
 * FUNCTION Pop
 *=========================================================
 * This function receives a struct pointer pointing to a
 * stack. It then pops or deletes the top element in the
 * stack and then points to the next element
 *
 * Returns : head
 *---------------------------------------------------------
 * PRE-CONDITIONS
 *  head: has to be previously defined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will return the next element in the stack
 ***********************************************************/

PersonRec* Pop(PersonRec* head)//IN - Points to the top element in a stack
{
	cout << "POPPING" << endl;

	//Function Peek - views the top element in the stack
	Peek(head);

	//PROCESSING - Deletes the top element in the stack by pointing the
	//head pointer to the next element
	head = head->next;

	return head;
}
