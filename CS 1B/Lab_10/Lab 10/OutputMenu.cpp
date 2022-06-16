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
 * FUNCTION - PrintHeader
 * -----------------------------------------------------------------------------
 * This function will output the menu instructions to the console letting the
 *	user know how to operate the menu.
 * -----------------------------------------------------------------------------
 *
 * VOID, Returns nothing. This function will output the menu to the console
 *	or output file.
 ******************************************************************************/
void OutputMenu()
{
	//OUTPUT - Outputting the menu to console.
	cout << "LIST MENU:"			 << endl
		 << "1 - Create List"		 << endl
		 << "2 - Display List"		 << endl
		 << "3 - Is the list empty?" << endl
		 << "4 - Search by name"	 << endl
		 << "5 - Remove Node"		 << endl
		 << "6 - Clear List"		 << endl
		 << "0 - to Exit"			 << endl;
}
