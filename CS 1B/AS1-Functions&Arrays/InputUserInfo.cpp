/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 1
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 9/17/19
 *****************************************************************************/

#include "as1.h"

/******************************************************************************
 * InputUserInfo
 * ---------------------------------------------------------------------------
 *     This function will pass in an input file and then populate three
 *     parallel arrays of separate data types
 * ---------------------------------------------------------------------------
 *****************************************************************************/

void InputUserInfo(ifstream &inputFile,//IN - Passes in the input file
		           string stringAr[],  //IN - Passes in an array of strings
				   int integerAr[],    //IN - Passes in an array of integers
		           float floatAr[],    //IN - Passes in an array of floats
				   int arraySize)      //IN - Passes in the size of the array
{
	int index = 0;

	while(inputFile && index < arraySize)
	{
		getline(inputFile, stringAr[index]);
		inputFile >> integerAr[index];
		inputFile >> floatAr[index];
		inputFile.ignore(1000,'\n');
		index++;
	}
}
