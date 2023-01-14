/*****************************************************************************
* AUTHORS    : Sam Liimatainen & Trevin Wolfe
* Student ID : 276308 & 1130500
* LAB #5     : Binary Search
* CLASS      : CS1B
* SECTION    : MW 7:30pm
* DUE DATE   : 9/24/19
******************************************************************************/
#include "MyHeader.h"

int main ()
{
/******************************************************************************
 * Program Name - Binary Search
 * ---------------------------------------------------------------------------
 * This program will given an array of integers search through and find certain
 * values with in the array. Then the program will perform sort the array in
 * ascending order and search for certain values again.
 * ---------------------------------------------------------------------------
 * INPUT & OUTPUT:
 * 		searchKey - Stores the value to be searched for.
******************************************************************************/

	const int AR_SIZE = 8;

	//The array that is passed through the functions for calculations
	int integerAr[AR_SIZE] = {4,1,7,12,8,13,9,21};

	int searchKey;  //IN & OUT  - The value the user is looking for.
	int keyLocation;//IN & CALC - The value returned from each function.


	//Outputs the class header
	PrintClassHeader(cout, "Binary Search", 5, 'L');

	// Outputs the value in each index of the array
	OutputArray(AR_SIZE, integerAr);

	cout << endl;

	// run the prompt and search 4 times
	for (int searchCount = 0; searchCount < 4; searchCount++)
	{
		keyLocation = 0;

		cout << "Enter an integer to search for: ";
		cin  >> searchKey;

		// Searches array sequentially
		// if the key is not found in the array, the function will return -1
		keyLocation = SearchArraySequential(AR_SIZE, integerAr, searchKey);

			if(keyLocation != -1)
			{
				cout << "The integer " << searchKey << " was found in index #";
				cout << keyLocation    << ".";
			}
			else
			{
				cout << searchKey << " was not found!";

			} // END if/then/else (keyLocation != -1)

		cout << endl << endl;

	} // END for (int x = 0; x < 4; x++)


	cout << endl;
	cout << "Performing Insertion Sort!";
	cout << endl << endl;


	/*************************************************************************
	 *Uses InsertionSort and SearchArrayBinary to perform the same task
	 *************************************************************************/

	// SortAnArrayInsertionSort - sort array least to greatest
	SortAnArrayInsertionSort(AR_SIZE, integerAr);

	// Output the value in each index of the array
	OutputArray(AR_SIZE, integerAr);

	cout << endl;

	for (int searchCount = 0; searchCount < 4; searchCount++)
	{
		keyLocation = 0;

		cout << "Enter an integer to search for: ";
		cin  >> searchKey;

		// Search array binary
		// if the key is not found in the array, the function will return -1
		keyLocation = SearchArrayBinary(AR_SIZE,integerAr,searchKey);

			if(keyLocation != -1)
			{
				cout << "The integer " << searchKey << " was found in index #";
				cout << keyLocation    << ".";
			}
			else
			{
				cout << searchKey << " was not found!";

			} // END if/then/else (keyLocation != -1)

		cout << endl << endl;

	} // END for (int x = 0; x < 4; x++)

return 0;
}
