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
 * FUNCTION Clear
 *=========================================================
 * This function receives a head pointer for a linked list
 * queue. It then pops or deletes the first node in the
 * queue until the queue is empty
 *
 * Returns : head
 *---------------------------------------------------------
 * PRE-CONDITIONS
 *  head: has to be previously defined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will return the head node in the queue
 ***********************************************************/

PersonRec *Clear(PersonRec* head)//IN - Points to the top element in a stack
{
	bool found;

	found = false;

	if (head == NULL)
	{
		cout << "The QUEUE is ALREADY clear!\n\n";
	}
	else
	{
		cout << "CLEARING...\n";

		//PROCESSING - Deletes the first node in the queue by pointing to the next
		//node
		while(!found && head != NULL)
		{
			if (head == NULL)
			{
				found = true;
			}
			else
			{
				cout << head -> name << endl;
				head = head->next;
			}
		}//END while(!found && head != NULL)

		cout << endl;
		cout << "The queue has been CLEARED!\n\n";
	}//END if (head == NULL)
	return head;
}
