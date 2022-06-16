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
 * FUNCTION EnQueue
 *=========================================================
 * This function receives by reference a head and tail
 * pointer for a linked list queue and allows the user to
 * continue to add nodes to the tail of the queue
 *
 * Returns : head
 *---------------------------------------------------------
 * PRE-CONDITIONS
 *  head: has to be previously defined
 *  tail: has to be previously defined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will return the new values of head and tail
 ***********************************************************/

void EnQueue(PersonRec *&head,//IN - Points to the first node in a queue
			 PersonRec *&tail)//IN - Points to the last node in a queue

{
	bool validInput;  //IN - Tracks if the input is valid or not
	PersonRec *perPtr;//IN - Tracks a temporary pointer for adding nodes

	//INITIALIZATIONS
	perPtr = new PersonRec;

/******************************************************************************
* INPUT - Prompts the user to input the information of a person
******************************************************************************/

	//Inputs name for new person
	cout << "Who would you like to add?" << endl;
	cout << "Enter Name: ";

	getline(cin, perPtr->name);

	//Inputs gender for new person
	do
	{
		cout << "Enter Gender: ";
		cin.get(perPtr->gender);
		perPtr->gender = toupper(perPtr->gender);

		if (perPtr->gender != 'M' &&
			perPtr->gender != 'F')
		{
			validInput = false;
			cout << "Please enter M or F for " << perPtr->name << "\'s gender." << endl << endl;
		}
		else
		{
			validInput = true;
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}while (!validInput);

	//Inputs age for new person
	do
	{
		cout << "Enter Age: ";

		if (!(cin >> perPtr->age))
		{
			cin.clear();
			cout << "Please enter a number for " << perPtr->name << "\'s age."
				 << endl;
			validInput = false;
		}
		else if(perPtr->age < 0)
		{
			cout << "Please enter a positive number for " << perPtr->name
				 << "\'s age." << endl;

			validInput = false;
		}
		else
		{
			validInput = true;
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}while (!validInput);

	perPtr -> next = NULL;

	//Checks if the list is empty or not
	if (head == NULL)
	{
		head = perPtr;
	}
	else
	{
		tail -> next = perPtr;
	}

	tail = perPtr;
	perPtr = NULL;
	cout << endl;
}
