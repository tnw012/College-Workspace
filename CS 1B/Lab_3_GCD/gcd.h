//HEADER NAME
#ifndef GCD_H_
#define GCD_H_

//Pre-Processing Directives
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>
#include <string>
#include <sstream>
using namespace std;

//Global Constants
//User Defined Types go here

// Prototypes
/******************************************************************************
 * FindGreatestCommonDivisor
 * ----------------------------------------------------------------------------
 * This function passes in two different integer values and finds the greatest
 * common divisor using recursion
 *
 * RETURNS: greatestCommonDivisor
 * This function returns the GCD using recursion
 *****************************************************************************/
int FindGreatestCommonDivisor(int valueOne,//IN -Passes in the first integer
        					  int valueTwo);//IN -Passes in the second integer

/******************************************************************************
 * GetInput
 * ----------------------------------------------------------------------------
  This function gets from the user two different integer values
 *
 * RETURNS: valueOne & valueTwo by reference
 * Returns by reference two integer values
 *****************************************************************************/
void   GetInput(int& valueOne, //OUT - Stores the first integer
	      	  	int& valueTwo);//OUT - Stores the second integer

/******************************************************************************
 * StreamClassHeader
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
void  StreamClassHeader(ostream &output,//OUT - Passes where the header outputs
        				string asName,  //OUT - Passes in the assignment name
						int asNum,      //OUT - Passes in the assignment number
						char asType);   //OUT - Passes the assignment type (L/A)

#endif /* GCD_H_ */
