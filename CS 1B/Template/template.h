/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #         : 12                       MAIN HEADER FILE
 * CLASS         : CS1B                          ARRAY
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/3/19
 *****************************************************************************/
#ifndef TEMPLATE_H_
#define TEMPLATE_H_

//Pre-Processing Directives
#include <iostream> /*cout/cin */
#include <iomanip>  /*setw */
#include <ios>      /*streamsize */
#include <fstream>  /*ifstream/ofstream */
#include <ostream>  /*ostream */
#include <sstream>  /* */
#include <string>   /*string */
#include <limits>   /*numeric_limits */

using namespace std;

//Global Constants
const int MAX_WIDTH  = 75;
const int ERROR_SIZE = 37;

//User Defined Types go here
enum Menu
{
	EXIT,
	ADD,
	FIRST,
	FIND,
	SIZE,
	OUTPUT,
	CLEAR,
};

// Prototypes
/******************************************************************************
 * PrintClassHeader
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
void PrintClassHeader (ostream &output,//OUT - Passes where the header outputs
					   string asName,  //OUT - Passes in the assignment name
					   int asNum,      //OUT - Passes in the assignment number
					   char asType);   //OUT - Passes the assignment type (L/A)

/******************************************************************************
 * Template
 * ----------------------------------------------------------------------------
 * This function does something
 *
 * RETURNS:
 * returns
 *****************************************************************************/
void TemplateFunc();

/******************************************************************************
 * Menu
 * ----------------------------------------------------------------------------
 * This function outputs a menu and prompts the user for a choice and error
 * checks the inputs displaying the proper error messages
 *
 * RETURNS: choice
 * Returns a menu choice from the user
 *****************************************************************************/
int Menu();

/******************************************************************************
 * OutputSheep
 * ----------------------------------------------------------------------------
 * This function outputs a single sheeps name and age
 *
 * RETURNS: none
 *****************************************************************************/
void OutputSheep (string name,//IN - Name to be output
		          int age);   //IN - Age to be output

#endif /* LAB13_H_ */
