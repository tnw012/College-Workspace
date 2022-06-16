/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Dylan Lackey
 * Student ID    : 1130500 & 1014845
 * LAB #         : 6
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 10/1/19
 *****************************************************************************/

#include "lab6.h"

void InputUserInfo(string fileName,	//IN - Passes in the input file
		           customerRecord customer[],	//IN - Passes a struct array.
				   int arraySize)      	//IN - Passes in the size of the array
{
	int index = 0;

	ifstream inputFile;
	inputFile.open(fileName);

	while(index < arraySize && !inputFile.eof())
	{
		getline(inputFile, customer[index].cusName);
		inputFile >> customer[index].cusId;
		inputFile >> customer[index].cusBalance;
		inputFile.ignore(1000,'\n');
		index++;
	}

	inputFile.close();
}
