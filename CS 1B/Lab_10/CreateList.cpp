/*******************************************************************************
* AUTHOR	   : Daniel Navarro
* STUDENT ID   : 1023994
* ASSIGNMENT 3 : Searching Linked Lists
* CLASS		   : CS1B
* SECTION	   : MW: 7:30pm - 9:50pm
* DUE DATE	   : 11/06/19
******************************************************************************/
#include "header.h"
/******************************************************************************
 * CreateList
 *		This function receives data within the input file and stores them into
 *		their respective arrays.
 *		One array for names, one for ID number, and one for balance.
 ******************************************************************************/

void CreateList(PersonNode* &head, PersonNode* &tail)
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - CreateList
	 * ------------------------------------------------------------------------
	 * USED FOR FORMATTING
	 * ------------------------------------------------------------------------
	 * PROMPT_SIZE    : setw value used for prompt.
	 * DEFAULT_INFILE : name of the default input text file.
	 ***************************************************************************/
	const int    PROMPT_SIZE    = 40;
	const string DEFAULT_INFILE = "InFile.txt";

	ifstream    inFile;	 //IN & CALC  - used to read input file
	PersonNode* perPtr;
	PersonNode* searchPtr;
	PersonNode* tailPtr;

	// INITALIZATIONS
	perPtr    = nullptr;
	searchPtr = nullptr;
	tailPtr   = nullptr;

	perPtr    = new PersonNode;
	searchPtr = new PersonNode;
	tailPtr   = new PersonNode;

	// Opening the input file and converting the name to a c-string.
	inFile.open(DEFAULT_INFILE);

	// OUTPUT - Outputs error message if could not open file.
	if (!inFile)
	{
		cout << " ERROR: Could not open file.";
	}
	cout << endl;

	while (inFile && perPtr != nullptr)
	{
		//Initializing For Each New Pointer
		perPtr->next = nullptr;
		perPtr->prev = nullptr;

		//Grabbing names from file
		getline(inFile, perPtr->name);
		inFile.get(perPtr->gender);
		inFile >> perPtr->age;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');
		//OUTPUT - Outputs current member of name being outputted.
		cout << "Adding : " << perPtr->name << endl;

		if (head == nullptr)
		{
			head = perPtr;
			tail = perPtr;
		}
		else
		{
			searchPtr = head;
			tailPtr   = perPtr;

			if (perPtr->name < searchPtr->name)
			{
				perPtr    -> next = searchPtr;
				searchPtr -> prev = perPtr;
				perPtr    -> prev = nullptr;
				head			  = perPtr;
				searchPtr		  = head;
			}
			else if (perPtr->name > searchPtr->name)
			{
				while (searchPtr != nullptr && perPtr->name > searchPtr->name)
				{
					tailPtr   = searchPtr;
					searchPtr = searchPtr -> next;
					if (searchPtr == nullptr)
					{
						tailPtr -> next = perPtr;
						perPtr  -> prev = tailPtr;
						perPtr  -> next = nullptr;
						tail = perPtr;
					}
					else if(perPtr->name < searchPtr->name)
					{
						tailPtr   -> next = perPtr;
						perPtr    -> prev = tailPtr;
						perPtr    -> next = searchPtr;
						searchPtr -> prev = perPtr;
						searchPtr		  = head;
					}//END IF 3
				}//END INNER WHILE
			}//END IF 2
		}//END IF 1
	}//END OUTER WHILE

	cout << endl;

	// Closing the input file.
	inFile.close();
}