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
 * FUNCTION Front
 *=========================================================
 * This function receives a head pointer of a linked list
 * queue and allows the user to see which node is the
 * first in queue
 *
 * Returns : nothing
 *---------------------------------------------------------
 * PRE-CONDITIONS
 *  head: has to be previously defined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will output than name, gender,
 *  and age of the front node in a queue
 ***********************************************************/
void Front(PersonRec* head)//IN - Points to the top element in a queue
{
	const int WIDTH = 8;//Sets the width for the input columns


	//OUTPUT - outputs the top element in the stack
	cout << left;
	cout << setw(WIDTH) << "Name: "		<< head->name	 << endl;
	cout << setw(WIDTH) << "Gender: "	<< head->gender  << endl;
	cout << setw(WIDTH) << "Age: "		<< head->age  	 << endl << endl;
	cout << right;
}
