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
 * FUNCTION DeQueue
 *=========================================================
 * This function receives a head pointer in a linked list
 * queue. It then pops or deletes the first node in the
 * queue and then points to the next node
 *
 * Returns : head
 *---------------------------------------------------------
 * PRE-CONDITIONS
 *  head: has to be previously defined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will return the next node in the stack
 ***********************************************************/

PersonRec* DeQueue(PersonRec* head)//IN - Points to the top element in a stack
{
	cout << "DEQUEUEING" << endl;

	//Function Front - views the first node in the stack
	Front(head);

	//PROCESSING - Deletes the first node in the queue by pointing the
	// to the next node
	head = head->next;
	cout << endl;

	return head;
}
