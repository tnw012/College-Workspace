/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * AS #          : 5
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/16/19
 *****************************************************************************/
#include "StackList.h"

/******************************************************************************
 * METHOD StackList: Class StackList (CONSTRUCTOR)
 * ----------------------------------------------------------------------------
 * This method initializes the attributes of the class
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method initializes the attributes of the class
 *****************************************************************************/
StackList::StackList()
{
	head = NULL;
	stackCount = 0;
}

/******************************************************************************
 * METHOD StackList: Class StackList (DESTRUCTOR)
 * ----------------------------------------------------------------------------
 * This method deletes the linked list node by node until the head pointer is
 * equal to NULL
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS: none
 *****************************************************************************/
StackList::~StackList()
{
	DVDNode *moviePtr;

		//Clears the list
		moviePtr = head;

		while(moviePtr != NULL)
		{
			head = head->next;
			delete moviePtr;

			moviePtr = head;
		}//END while(sheepPtr != NULL)
}

/******************************************************************************
 * METHOD Push: Class StackList
 * ----------------------------------------------------------------------------
 * This method receives a new node and stacks it to a current or empty list
 *
 * RETURNS: none
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   newDVD: has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method adds a node to a list
 *****************************************************************************/
void StackList::Push(DVDNode *newDVD)
{
	newDVD -> next = head;
	head = newDVD;

	if (head == NULL)
	{
		cout  << "Error did not load the movie\n\n";
	}
}

/******************************************************************************
 * METHOD Pop: Class StackList
 * ----------------------------------------------------------------------------
 * This method removes the top node in a stack
 *
 * RETURNS: popPtr
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method removes the top node in a stack
 *****************************************************************************/
DVDNode *StackList::Pop(DVDNode *tempPtr)
{
	DVDNode *popPtr;

	popPtr = NULL;

	if (tempPtr == head)
	{
		head = head->next;
		return head;
	}
	else
	{
		popPtr = tempPtr;
		popPtr = popPtr->next;

		return popPtr;
	}
}

/******************************************************************************
 * METHOD IsEmpty: Class StackList
 * ----------------------------------------------------------------------------
 * This method checks to see if the stack is empty or not
 *
 * RETURNS: empty
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method returns a boolean value
 *****************************************************************************/
bool StackList::IsEmpty(DVDNode *ptr) const
{
	bool empty;

	empty = true;

	if(head != NULL)
	{
		empty = false;
	}

	return empty;
}

/******************************************************************************
 * METHOD Peek: Class StackList
 * ----------------------------------------------------------------------------
 * This method returns the first node in a stack
 *
 * RETURNS:
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method returns the first node in a stack
 *****************************************************************************/
void StackList::Peek(ostream &output, DVDNode *tempPtr, int num) const
{
	//USED FOR THE SINGLE TITLE OUTPUT
	const int MOVIE_WID  = 9;
	const int NUM_WID    = 9;
	const int TITLE_WID  = 7;
	const int YEAR_WID   = 6;
	const int RATING_WID = 8;
	const int ACTOR_WID  = 18;
 	const int NAME_WID   = 25;
	const int GENRE_WID  = 9;

	//VARIABLES
	DVDNode *outputPtr;

	//INITIALIZATIONS
	outputPtr = tempPtr ;

/*****************************************************************************
 * OUTPUT - Formats and area for a single movie to output to
 *****************************************************************************/

	//Outputs the column titles
	output << setfill('*') << setw(MAX_WIDTH) << '*'
		   << setfill(' ') << endl;

	output << left;// Sets justification to left
	output << setw(MOVIE_WID)<< "Movie #:" << setw(NUM_WID) << num + 1
	       << setw(TITLE_WID)<< "Title:"   << outputPtr->title
		   << endl;

		   //Sets the column widths for the actors and genre
	output << setfill ('-')   << setw(MAX_WIDTH) << '-'
		   << setfill (' ')   << endl
		   << setw(YEAR_WID)  << "Year:"   << setw(12) << outputPtr->year
		   << setw(RATING_WID)<< "Rating:" << head -> rating
		   << endl;

		   //Sets the column widths for the actors and genre
	output << setfill('-')    << setw(MAX_WIDTH) << '-'
		   << setfill(' ')    << endl
		   << setw(ACTOR_WID) << "Leading Actor:"
		   << setw(NAME_WID)  << tempPtr->leadingActor
		   << setw(GENRE_WID) << "Genre 1:" << outputPtr->genre
		   << endl
		   << setw(ACTOR_WID) << "Supporting Actor:"
		   << setw(NAME_WID)  << tempPtr->supportActor
		   << setw(GENRE_WID) << "Genre 2:" << outputPtr->altGenre
		   << endl;

		   //Sets the area for the plot
	output << setfill('-')      << setw(MAX_WIDTH) << '-'
		   << setfill(' ')      << endl
		   << "PLOT:"           << endl
		   << outputPtr->synopsis << endl
		   << setfill('*')      << setw(MAX_WIDTH) << '*'
		   << setfill(' ')      << endl;
	output << right;// Sets Justification back to default (right)

	output << endl;

	delete outputPtr;
	outputPtr = NULL;
}

/******************************************************************************
 * METHOD Size: Class StackList
 * ----------------------------------------------------------------------------
 * This method returns the size of the stack
 *
 * RETURNS: stackCount
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method returns the size of the stack
 *****************************************************************************/
int StackList::Size() const
{
	return stackCount;
}

