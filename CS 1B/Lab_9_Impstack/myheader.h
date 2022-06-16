/*****************************************************************************
 * AUTHORS       : Dylan Lackey,	Trevin Wolfe
 * Student ID    : 1014845,			1130500
 * Exercise      : Lab 9 - Implementing a Stack
 * CLASS         : CS1B
 * SECTION       : MW-7:30P
 * DUE DATE      : 10/22/19
 *****************************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iomanip>	// setw / setprecision
#include <iostream>	// cin / cout
#include <string>	// string
#include <limits>	// numeric_limits
#include <ios>		// streamsize

using namespace std;

//Defines a new person record
struct PersonRec
{
	string name;
	char gender;
	int age;
	PersonRec* next;
};

enum Menu
{
	EXIT,
	PUSH,
	POP,
	ISEMPTY,
	PEEK,
	SIZE
};

/*******************************************************************************
 *	StreamOutPutClassHeader
 *		This function outputs the class header to given stream. It takes in the
 *		assignment number, the name of the assignment, and if it is a lab or
 *		assignment
 *
 *	RETURNS: Nothing - outputs class header to either file or console.
 *******************************************************************************/
void StreamOutputClassHeader(	ostream &output,	// IN - Stream variable
								int labNum,			// IN - Assignment number
								string labName,		// IN - Assignment name
								char asnType = 'L');// IN - Assignment type

/******************************************************************************
* Menu
*   This function outputs a menu and prompts the user for a choice. It then
*   error checks the input and processes the menu choice for the stack
*
* RETURNS: nothing
*	-> Outputs a menu and prompts the user for a choice
*****************************************************************************/
void Menu();

/******************************************************************************
* Push
* 	This function passes in a struct and allows the user to to add elements to
* 	the stack using a name, gender, and age.
*
* RETURNS: head
*	-> It returns the head element in the linked list
*****************************************************************************/
PersonRec*	Push(PersonRec* head);//IN - Passes in a stuct data type

/******************************************************************************
* Pop
* 	This functions passes in a linked list pointing to the head element
* 	and allows the user to delete the top element in the stack.
*
* RETURNS: head
*	-> It returns the head element in the linked list
*****************************************************************************/
PersonRec*	Pop(PersonRec* head);

/******************************************************************************
* IsEmpty
* 	This function passes in a linked list pointing to the head element
* 	and checks to see if the stack is empty it then outputs a message depending
* 	on the state of the stack
*
* RETURNS: Bool value
*	-> Returns a true if the the stack is empty and returns a false if the
*	   stack is not empty
*****************************************************************************/
bool IsEmpty(PersonRec* head);

/******************************************************************************
* Peek
* 	This function passes in a linked list pointing to the head element
*   and checks what the first element in the stack is.
*
* RETURNS: nothing
*	-> Outputs the first element in the stack
*****************************************************************************/
void Peek(PersonRec* head);

/******************************************************************************
* Size
* 	This function pass in a linked list pointing the head element. It then
* 	determines the size of the stack returns and integer value
*
* RETURNS: count
*	-> It returns an integer value for the size of the stack
*****************************************************************************/
int	Size(PersonRec* head);


#endif /* MYHEADER_H_*/
