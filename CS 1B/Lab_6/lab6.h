/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Dylan Lackey
 * Student ID    : 1130500 &
 * LAB #         : 6
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 10/1/19
 *****************************************************************************/
#ifndef LAB6_H_
#define LAB6_H_

//Pre-Processing Directives
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>
#include <string>
using namespace std;

//Global Constants
//User Defined Types go here

// Prototypes
struct customerRecord{

	string cusName;
	int    cusId;
	float  cusBalance;
};

/******************************************************************************
 * SearchForName
 * ---------------------------------------------------------------------------
 *     This function searches through an array of structs looking for a string.
 *     Once the string is found the function returns the index of string.
 * ---------------------------------------------------------------------------
 *****************************************************************************/
int SearchForName(string findString,
		          customerRecord customer[],
				  int arraySize);

/******************************************************************************
 * PrintClassHeader
 * ---------------------------------------------------------------------------
 *     This function outputs the class header either to a file or console
 *     this is determined through the parameter output.
 * ---------------------------------------------------------------------------
 *****************************************************************************/
void PrintClassHeader (ostream &output,
					   string asName,
					   int asNum,
					   char asType);

/******************************************************************************
 * PrintToFile
 * ---------------------------------------------------------------------------
 *     This function outputs the
 * ---------------------------------------------------------------------------
 *****************************************************************************/
void PrintToFile(ostream &output,
				int option,
				string name,
				int id,
				float balance,
				float sum);
/******************************************************************************
 * InputUserInfo
 * ---------------------------------------------------------------------------
 *     This function passes data from an input file into the function and
 *     populates an array of structs.
 * ---------------------------------------------------------------------------
 *****************************************************************************/
void InputUserInfo(string fileName,
		           customerRecord customer[],
				   int arraySize);
/******************************************************************************
 * FindExtremeValue
 * ---------------------------------------------------------------------------
 *     This function passes data from an input file into the function and
 *     populates an array of structs.
 * ---------------------------------------------------------------------------
 *****************************************************************************/
int   FindExtremeValue(	customerRecord customer[],
						int arSize);
/******************************************************************************
 * FindExtremeValue
 * ---------------------------------------------------------------------------
 *     This function passes data from an input file into the function and
 *     populates an array of structs.
 * ---------------------------------------------------------------------------
 *****************************************************************************/
float SumFloats(customerRecord customer[],
				int size);

#endif /* LAB6_H_ */
