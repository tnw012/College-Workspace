/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 1
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 9/17/19
 *****************************************************************************/

#ifndef AS1_H_
#define AS1_H_

//Pre-Processing Directives
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>
#include <sstream>
#include <string>
using namespace std;

//Global Constants
//User Defined Types go here

// Prototypes
float GetSumOrAvg(int option, float floatAr[], int arraySize);
int SearchBalance(int option, float floatAr[], int arraySize);
int SearchForName(string findString, string stringAr[], int arraySize);
void PrintClassHeader (ostream &output, string asName, int asNum, char asType);
void PrintToFile(ostream &output, int option, string name, int id,
				 float balance, float sum, float avg);
void InputUserInfo(ifstream &inputFile, string stringAr[], int integerAr[],
		           float floatAr[], int arraySize);


#endif /* AS1_H_ */
