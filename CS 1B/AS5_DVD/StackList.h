/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * AS #          : 5
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/16/19
 *****************************************************************************/


#ifndef STACKLIST_H_
#define STACKLIST_H_

//Pre-Processing Directives
#include "as5.h"

//Global Constants
const int MAX_WIDTH  = 75;

//User Defined Types
struct DVDNode
{
	string title;
	string leadingActor;
	string supportActor;
	string genre;
	string altGenre;
	int year;
	int rating;
	string synopsis;
	DVDNode *next;
};

/******************************************************************************
 * StackList Class
 * ----------------------------------------------------------------------------
 * This class Manages a list of sheep on a farm. It manages a struct and 2
 * attributes the pointer head and sheepCount
 *****************************************************************************/
class StackList
{
	public:
		/********************************
		 ** CONSTUCTOR & DECONSTRUCTOR **
		 ********************************/

/******************************************************************************
 * StackList();
 * 		Constructor: Initialize class attributes
 * 		Parameters : none
 * 		Return     : none
 *****************************************************************************/
		StackList();			//CONSTRUCTOR

/******************************************************************************
 * ~StackList();
 * 		Destructor: does not perform any specific function
 * 		Parameters: none
 * 		Return    : none
 *****************************************************************************/
		~StackList();		//DESTRUCTOR

		/****************
		 *   MUTATORS   *
		 ****************/

/******************************************************************************
 * void Push(DVDNode newDVD);
 *
 * 		Mutator: This method will add a new dvd to the list
 * 		list
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			newDVD (DVDNode) //IN - passes in a node to be added to a list
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void Push(DVDNode *newDVD);

/******************************************************************************
 * DVDNode Pop(DVDNode *tempPtr);
 *
 * 		Mutator: This method will remove a node from a list
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			newDVD (DVDNode) //IN - passes in a node to be added to a list
 * ----------------------------------------------------------------------------
 * RETURNS: popPtr
 *****************************************************************************/
		DVDNode *Pop(DVDNode *tempPtr);

		/****************
		 *   ACCESSORS  *
		 ****************/

/******************************************************************************
 * bool IsEmpty() const;
 *
 * 		Accessor: This method passes in a pointer to a linked list. It then
 * 		checks the head pointer of the list to see if it is empty
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			ptr (DVDNode) //IN - passes in a linked list to be checked
 * ----------------------------------------------------------------------------
 * RETURNS: empty
 *****************************************************************************/
		bool IsEmpty(DVDNode *ptr) const;

/******************************************************************************
 * DVDNode Peek(ostream &output, DVDNode *tempPtr, int num) const;
 *
 * 		Accessor: This method show the top node in a stack
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			output (ostream) //IN -  passes in a choice for output
 * 			tempPtr(DVDNode) //IN -  the list to be peeked
 * 			num    (integer) //IN -  passes in the movie number
 * ----------------------------------------------------------------------------
 * RETURNS:
 *****************************************************************************/
		void Peek(ostream &output, DVDNode *tempPtr, int num) const;

/******************************************************************************
 * int Size() const;
 *
 * 		Accessor: This method returns the size of the stack
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURNS: stackCount
 *****************************************************************************/
		int Size() const;

		/******************
		 *   ATTRIBUTES   *
		 *****************/
	protected:
		DVDNode *head;
		int stackCount;
};

#endif /* STACKLIST_H_ */
