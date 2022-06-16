/*****************************************************************************
* AUTHORS    : Trevin Wolfe & Sam Liimatainen
* Student ID : 1130500 & 276308
* LAB #9A    : Implementing a Queue
* CLASS      : CS1B
* SECTION    : MW 7:30pm
* DUE DATE   : 10/29/19
******************************************************************************/

#include "myheader.h"

/*****************************************************************************
 * Implementing a Queue
 * ---------------------------------------------------------------------------
 * This program will output a menu and prompt the user for a menu choice. Based
 * on the menu choice from the user the program will then either add to the
 * tail of a queue, delete the first node in a queue, view the first node in a
 * queue, or peek at the first node in a queue. The program can also check
 * the size of the queue or if it is empty.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		Menu()    - Used for getting information from the user
 * 		EnQueue() - Adds a new node to the tail of a queue
 * OUTPUT:
 * 		Front()   - Outputs the first node in queue
 * 		DeQueue() - Removes the first node in queue
 *
 *****************************************************************************/
int main()
{
	bool empty;     //CALC      - Tracks if the queue is empty or not
	int menuChoice; //IN & CALC - Stores the input value for the menu
	int listSize;   //CALC      - Stores the size of the stack
	PersonRec *head;//CALC      - Points to the head node in the linked list
	PersonRec *tail;//CALC      - Points to the tail node in the linked list

	//INITIALIZATIONS
	head = NULL;
	tail = NULL;
	listSize = 0;
	menuChoice = 0;

	//Function StreamOutputClassHeader - Outputs the class header
	PrintClassHeader(cout, "Implementing a Queue", 9, 'L');

/******************************************************************************
 * INPUT - Shows the user a menu and prompts them for a menu option
 *****************************************************************************/

	//Function Menu - Outputs the menu and prompts the user for a choice
	menuChoice = Menu();

/******************************************************************************
 * PROCESSING - Based on the menu choice from the user the program will then
 * either add a node, delete a node, view the first node , or peek at the front
 * node of a queue. The program can also check the size of the queue or if it
 * is empty.
******************************************************************************/

	while (menuChoice != 0)
	{
		switch (menuChoice)
		{
			case ENQUEUE:
			{
				//Functions EnQueue - add a new node the tail of a queue
				EnQueue(head, tail);
				break;
			}
			case DEQUEUE:
			{
				//Function  IsEmpty - returns a boolean value
				empty = IsEmpty(head);

				if (empty)
				{
					cout << "Can't DEQUEUE from an empty list!\n\n";
				}
				else
				{
					//Function DeQueue - removes the first node in queue
					head = DeQueue(head);

				}//END if (IsEmpty(head))
				break;
			}
			case ISEMPTY:
			{
				//Function  IsEmpty - returns a boolean value
				empty = IsEmpty(head);

				if (empty)
				{
					cout << "Yes, the QUEUE is empty.\n\n";
				}
				else
				{
					cout << "The QUEUE is NOT empty.\n\n";
				}
				break;
			}
			case FRONT:
			{
				//Function  IsEmpty - returns a boolean value
				empty = IsEmpty(head);

				if (empty)
				{
					cout << "Nobody in FRONT, the queue is empty\n\n";
				}
				else
				{
					cout << "The first person in the queue is:\n";

					//Function Front - outputs the first node in the queue
					Front(head);
				}
				break;
			}
			case SIZE:
			{
				//Function Size - returns the size of the queue
				listSize = Size(head);

				if (listSize == 0)
				{
					cout << "Nobody is in the queue!\n\n" << endl;
				}
				else if (listSize == 1)
				{
					cout << "There is one person in the queue\n\n";
				}
				else
				{
					cout << "There are " << listSize
						 << " people in the queue.\n\n";
				}//END if else if (listSize)
				break;
			}
			case CLEAR:
			{
				//Functions Clear - clears the queue one node at a time
				head = Clear(head);
				break;
			}
			default:
			{
				menuChoice = EXIT;
			}
				break;
		}//END switch(menuChoice)

		//Function Menu - Outputs the menu and prompts the user for a choice
		menuChoice = Menu();

		cout << endl;
	}//end while (menuChoice != 0)

	cout << "Thank you for using my program.";

	return 0;
}
