/*******************************************************************************
* AUTHOR	 : Daniel Navarro & Trevin Wolfe
* STUDENT ID : 1023994		  & 1130500
* LAB #10	 : Creating an Ordered List
* CLASS		 : CS1B
* SECTION	 : MW: 7:30pm - 9:50pm
* DUE DATE	 : 11/4/19
******************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iomanip>   /* used for setw			 */
#include <iostream>  /* used for cout, cin, endl */
#include <ios>		 /* used for streamsize      */
#include <limits>    /* used for numeric_limits  */
#include <string>	 /* used for string datatype */
#include <fstream>	 /* used for in/out files    */

enum MenuOption
{
	EXIT,
	CREATE,
	DISPLAY,
	ISEMPTY,
	SEARCHNAME,
	REMOVENODE,
	CLEARLIST
};

struct PersonNode {
	int			age;
	char        gender;
	string		name;
	PersonNode* next;
	PersonNode* prev;
};

using namespace std;

/******************************************************************************
 * VOID - PrintHeader
 *		This function receives the assignment name, assignment number, and
 *		type then outputs the appropriate header to console or output file.
 *			==> Returns nothing.  This function will output the class heading.
 ******************************************************************************/
void PrintHeader(ostream& output,  // IN & OUT - output display type
				 string   asName,  // IN       - assignment name
				 int      asNum,   // IN       - assignment number
				 char     asType); // IN       - assignment type L or A

void OutputMenu();

MenuOption GetAndCheckInput();

void CreateList(PersonNode*& head, PersonNode*& tail);

void DisplayList();

#endif /*HEADER_H_ */