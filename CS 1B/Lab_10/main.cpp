/*******************************************************************************
* AUTHOR	 : Daniel Navarro & Trevin Wolfe
* STUDENT ID : 1023994		  & 1130500
* LAB #10	 : Creating an Ordered List
* CLASS		 : CS1B
* SECTION	 : MW: 7:30pm - 9:50pm
* DUE DATE	 : 11/4/19
******************************************************************************/
#include "header.h"

/*******************************************************************************
 * Introduction to Ordered Lists Program
 * -----------------------------------------------------------------------------
 * This function receives the assignment name, assignment number, and type then
 *	outputs the appropriate header to console or output file.
 ******************************************************************************/
int main()
{
	PersonNode *head;
	PersonNode *tail;
	MenuOption userOption;

	PrintHeader(cout, "Creating an Ordered List", 10, 'L');
	OutputMenu();
	userOption = GetAndCheckInput();

	//while (userOption != EXIT)
	//{
	//	switch (userOption)
	//	{
	//	case 
	//	}
	//	OutputMenu();
	//}
	return 0;
}