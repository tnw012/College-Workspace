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
 * FUNCTION Push
 *=========================================================
 * This function receives a struct pointer pointing to a
 * stack and allows the user to continue to add to the
 * stack by added a persons information
 *
 * Returns : head
 *---------------------------------------------------------
 * PRE-CONDITIONS
 *  head: has to be previously defined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will return the head element in the stack
 ***********************************************************/

PersonRec* Push(PersonRec* head)//IN - Points to the top element in a stack
{
	bool validInput;	 //CALC - Tracks if the input is correct or not
	PersonRec *newPerson;//IN   - makes a new node for person

	//INITIALIZATIONS
	newPerson = new PersonRec;

/******************************************************************************
 *INPUT - Prompts the user to input the information of a person
 *****************************************************************************/

	cout << "Who would you like to add?" << endl;
	cout << "Enter Name: ";


	//Input name for new person
	getline(cin, newPerson->name);

	//Input gender for new person
	do
	{
		cout << "Enter Gender: ";
		cin.get(newPerson->gender);
		newPerson->gender = toupper(newPerson->gender);

		if (newPerson->gender != 'M' &&
			newPerson->gender != 'F')
		{
			validInput = false;
			cout << "Please enter M or F for " << newPerson->name << "\'s gender." << endl << endl;
		}
		else
		{
			validInput = true;
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}while (!validInput);

	//Input age for new person
	do
	{
		cout << "Enter Age: ";

		if (!(cin >> newPerson->age))
		{
			cin.clear();
			cout << "Please enter a number for " << newPerson->name << "\'s age." << endl;
			validInput = false;
		}
		else if(newPerson->age < 0)
		{
			cout << "Please enter a positive number for " << newPerson->name
				 << "\'s age." << endl;

			validInput = false;
		}
		else
		{
			validInput = true;
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}while (!validInput);

	newPerson->next = head;
	head = newPerson;

	return head;
}
