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
 * FUNCTION Menu
 *=========================================================
 * This function outputs a menu and prompts the user for a
 * choice. It then error checks the input and processes
 * the menu choice for the stack.
 *
 * Returns : nothing
 *---------------------------------------------------------
 * PRE-CONDITIONS
 * There are no pre conditions
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will output a menu and prompt the user for
 *  a choice
 ***********************************************************/

void Menu()
{
	const int ERROR_SIZE = 37;//Sets the column width for the error message

	bool empty;     //CALC - Tracks if the stack is empty or not
	int choice;     //IN & CALC - Stores the input value for the menu
	int listSize;   //CALC - Stores the size of the stack
	PersonRec* head;//CALC - Points to the head node in the the stack

	//INITIALIZATIONS
	head = NULL;
	listSize = 0;

/******************************************************************************
 * INPUT - Outputs a menus and prompts the user for a choice. It then error
 * checks for a valid input and outputs a message if the input is wrong
******************************************************************************/

	cout << left;
	do
	{
		cout << "STACK MENU:" << endl;
		cout << "1 - Add a person (PUSH)" << endl;
		cout << "2 - Remove a person (POP)" << endl;
		cout << "3 - Is the stack empty? (ISEMPTY)" << endl;
		cout << "4 - Who is on top? (PEEK)" << endl;
		cout << "5 - How many people are there? (SIZE)" << endl;
		cout << "0 - To Exit" << endl;
		cout << "Enter a command? ";

		//Error checks the input
		if (!(cin >> choice))
		{
			cout << endl;
			cout << "**** Please input a number between 0 and 5" << " ****"
				<< endl << endl;
			//prevent infinite loop
			choice = -99;

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		} //END if (!(cin >> choice))
		else if (choice < 0 || choice > 5)
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << endl;

			cout << "**** " << setw(ERROR_SIZE)
				 << "The number " + to_string(choice) + " is an invalid entry"
				 << " ****" << endl;
			cout << "**** " << setw(ERROR_SIZE)
				 << "Please input a number between 0 and 5" << " ****" << endl
				 << endl;
		} //END else if (choice < 0 || choice > 5)
		else
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << endl;

/******************************************************************************
 * PROCESSING - Based on the menu choice from the user the program will then
 * either add and element, delete an element, view the top element , or peek at
 * the top element of the stack. The program can also check the size of the
 * stack or if it is empty.
 *****************************************************************************/

			switch (choice)
			{
				case 1:
				{
					//Function Push - Adds an element to the stack
					head = Push(head);
					break;
				}
				case 2:
				{
					//Function  IsEmpty - returns a boolean value
					empty = IsEmpty(head);

					if (empty)
					{
						cout << "Can't POP from an empty stack!" << endl;
					}
					else
					{
						//Function Pop - deletes the top element in the stack
						head = Pop(head);
					}//END if (IsEmpty(head))
					break;
				}
				case 3:
				{
					//Function  IsEmpty - returns a boolean value
					empty = IsEmpty(head);

					if (empty)
					{
						cout << "Yes, the stack is empty." << endl;
					}
					else
					{
						cout << "The stack is NOT empty." << endl;
					}
					break;
				}
				case 4:
				{
					//Function  IsEmpty - returns a boolean value
					empty = IsEmpty(head);

					if (empty)
					{
						cout << "There is nobody to PEEK at!" << endl;
					}
					else
					{
						cout << "PEEKING at" << endl;

						//Function Peek - outputs the top element of the stack
						Peek(head);
					}
					break;
				}
				case 5:
				{
					//Function Size - returns the size of the stack
					listSize = Size(head);

					if (listSize == 0)
					{
						cout << "Nobody is on the stack!" << endl;
					}
					else if (listSize == 1)
					{
						cout << "There is one person on the stack" << endl;
					}
					else
					{
						cout << "There are " << listSize
							 << " people on the stack." << endl;
					}//END if else if (listSize)
					break;
				}
				default:
					break;
			}//END switch(choice)

			cout << endl;

		}//END else
	}while (choice != 0);

	cout << right;
}// END void Menu()
