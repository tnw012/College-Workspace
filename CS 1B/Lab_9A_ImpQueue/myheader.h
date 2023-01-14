/*****************************************************************************
* AUTHORS    : Trevin Wolfe & Sam Liimatainen
* Student ID : 1130500 & 276308
* LAB #9A    : Implementing a Queue
* CLASS      : CS1B
* SECTION    : MW 7:30pm
* DUE DATE   : 10/29/19
******************************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iomanip>	// setw / setprecision
#include <iostream>	// cin / cout
#include <string>	// string
#include <limits>	// numeric_limits
#include <ios>		// streamsize

using namespace std;

//Defines a new person record/node
struct PersonRec
{
	string name;
	char gender;
	int age;
	PersonRec* next;
};

//Used to track the menu option
enum Menu
{
	EXIT,
	ENQUEUE,
	DEQUEUE,
	ISEMPTY,
	FRONT,
	SIZE,
	CLEAR
};

/*******************************************************************************
 *	StreamOutPutClassHeader
 *		This function outputs the class header to given stream. It takes in the
 *		assignment number, the name of the assignment, and if it is a lab or
 *		assignment
 *
 *	RETURNS: Nothing - outputs class header to either file or console.
 *******************************************************************************/
void PrintClassHeader(ostream &output,//OUT - Passes where the header outputs
		              string asName,  //OUT - Passes in the assignment name
					  int asNum,      //OUT - Passes in the assignment number
					  char asType);   //OUT - Passes the assignment type (L/A)
/******************************************************************************
* Menu
*   This function outputs a menu and prompts the user for a choice. It then
*   error checks the input.
*
* RETURNS: choice
*	-> Returns a integer value used for the menu choice
*****************************************************************************/
int Menu();

/******************************************************************************
* EnQueue
* 	This function passes in a pointer to head and tail nodes of list. It then
*   allows the user to input information into a new node. Then it places the
*   new node at the end of the list.
*
* RETURNS: head & tail by reference
*	-> It returns the head & tail pointers in a linked list
*****************************************************************************/
void EnQueue(PersonRec *&head, //IN - Passes the head pointer of a list
			 PersonRec *&tail);//IN - Passes the tail pointer of a list

/******************************************************************************
* DeQueue
* 	This functions passes in a linked list pointing to the head node
* 	and allows the user to delete the front element in the queue.
*
* RETURNS: head
*	-> It returns the head pointer in a linked list
*****************************************************************************/
PersonRec *DeQueue(PersonRec* head);//IN - Points to the top element in a stack

/******************************************************************************
* IsEmpty
* 	This function passes in a linked list pointing to the head element
* 	and checks to see if the queue is empty it then outputs a message depending
* 	on the state of the stack
*
* RETURNS: Boolean value
*	-> Returns a true if the the queue is empty and returns a false if the
*	   queue is not empty
*****************************************************************************/
bool IsEmpty(PersonRec* head);//IN - Points to the top element in a stack

/******************************************************************************
* Front
* 	This function passes in a linked list pointing to the head element
*   and checks what the first node in the queue is.
*
* RETURNS: nothing
*	-> Outputs the first node in the queue
*****************************************************************************/
void Front(PersonRec* head);//IN - Points to the top element in a stack

/******************************************************************************
* Size
* 	This function pass in a linked list pointing to the head node. It then
* 	determines the size of the stack returns an integer value
*
* RETURNS: count
*	-> It returns an integer value for the size of the queue
*****************************************************************************/
int	Size(PersonRec* head);//IN - Points to the top element in a stack

/******************************************************************************
* Clear
* 	This function passes in a head pointer to a linked list queue. It then
* 	clears each node until the head pointer is pointing to NULL
*
* RETURNS: head
*	-> It returns the head pointer in a linked list
*****************************************************************************/
PersonRec *Clear(PersonRec *head);//IN - Points to the top element in a stack


#endif /* MYHEADER_H_*/
