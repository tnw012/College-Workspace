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
 * FUNCTION Peek
 *=========================================================
 * This function receives a struct pointer pointing to a
 * stack and allows the user to see which element is on
 * top in a stack
 *
 * Returns : nothing
 *---------------------------------------------------------
 * PRE-CONDITIONS
 *  head: has to be previously defined
 *---------------------------------------------------------
 * POST-CONDITIONS
 *  This function will output than name, gender,
 *  and age of the top element on the stack
 ***********************************************************/
void Peek(PersonRec* head)//IN - Points to the top element in a stack
{
	const int WIDTH = 8;//Sets the width for the input columns


	//OUTPUT - outputs the top element in the stack
	cout << left;
	cout << setw(WIDTH) << "Name: "		<< head->name	 << endl;
	cout << setw(WIDTH) << "Gender: "	<< head->gender << endl;
	cout << setw(WIDTH) << "Age: "		<< head->age  	 << endl;
	cout << right;
}
