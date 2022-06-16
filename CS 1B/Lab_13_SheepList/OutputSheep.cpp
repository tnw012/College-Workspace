/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #         : 13
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/3/19
 *****************************************************************************/
#include "lab13.h"

/******************************************************************************
 * FUNCTION OutputSheep
 * ----------------------------------------------------------------------------
 * This function outputs a single sheep
 *
 * RETURNS: nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 		name: has to be previously defined
 * 		age : has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This function outputs the name and age of a sheep
 *****************************************************************************/
void OutputSheep (string name,//IN - Name to be output
				  int age)    //IN - Age  to be output
{
	const int AGE_COL  = 7;
	const int NAME_COL = 15;
	const int AGE_WID  = 7;
	const int NAME_WID = 16;

//OUTPUT - The name and age of a single sheep
	cout << left;
	cout << setw(NAME_COL) << "NAME"
		 << setw(AGE_COL)  << "AGE";
	cout << endl;
	cout << "-------------- "
		 << "---\n";

	cout << setw(NAME_WID) << name
		 << setw(AGE_WID) << age;

	cout << endl << endl;

}
