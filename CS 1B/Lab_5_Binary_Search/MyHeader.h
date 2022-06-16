/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 *****************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>
#include <iomanip>
#include <ostream>
#include <string>
using namespace std;

//Prototypes

/******************************************************************************
 * OutputArray
 * ---------------------------------------------------------------------------
 *     This function passes in an array of integers, and outputs the array
 *     showing all of the indexes.
 * ---------------------------------------------------------------------------
 *****************************************************************************/
void OutputArray(const int AR_SIZE,//IN - Passes the array size
		         int intAr[]);     //IN - Passes the array

/******************************************************************************
 * SearchArraySequential
 * ---------------------------------------------------------------------------
 *   This functions passes in an array of integers and a search key
 *
 *   Returns: The index of the value being searched for in the array.
 * ---------------------------------------------------------------------------
 *****************************************************************************/
int SearchArraySequential(const int AR_SIZE,//IN - Array size
		                  int intAr[],      //IN - Array of integers
						  int ikey);        //IN - Value being searched for

/******************************************************************************
 * SortAnArrayInsertionSort
 * ---------------------------------------------------------------------------
 *     This function passes in an array of integers and then sorts array in
 *     ascending order
 * ---------------------------------------------------------------------------
 *****************************************************************************/
void SortAnArrayInsertionSort(const int AR_SIZE,//IN - Array size
		                      int intAr[]);     //IN - Array of integers

/******************************************************************************
 * SearchArrayBinary
 * ---------------------------------------------------------------------------
 *     This function passes in an array of integers, an array size, and a key
 *     to be searched for.
 *
 *     Returns: The index of the key being searched for
 * ---------------------------------------------------------------------------
 *****************************************************************************/
int SearchArrayBinary(const int AR_SIZE,//IN - Size of the array
		              int intAr[],      //IN - Array of integers
					  int iKey);        //IN - Value being searched for

/******************************************************************************
 * PrintClassHeader
 * ---------------------------------------------------------------------------
 *     This function outputs the class header either to a file or console
 *     this is determined through the parameter output.
 * ---------------------------------------------------------------------------
 *****************************************************************************/
void PrintClassHeader(ostream &output,//OUT - Passes where the header outputs
		              string asName,  //OUT - Passes in the assignment name
					  int asNum,      //OUT - Passes in the assignment number
					  char asType);   //OUT - Passes the assignment type (L/A)



#endif /* MYHEADER_H_ */
