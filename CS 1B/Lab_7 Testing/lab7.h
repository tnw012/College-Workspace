/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 2
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 10/11/19
 *****************************************************************************/

#ifndef LAB7_H_
#define LAB7_H_

//Pre-Processing Directives
#include <iostream>
#include <iomanip>
#include <ostream>
#include <string>
using namespace std;

//Global Constants
//User Defined Types go here
//Prototypes

/******************************************************************************
 * PrintClassHeader
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: nothing
 * Displays the class header
 *****************************************************************************/
void PrintClassHeader(ostream& output,
					  string asName,
					  int asNum,
					  char asType);

#endif /* LAB7_H_ */
