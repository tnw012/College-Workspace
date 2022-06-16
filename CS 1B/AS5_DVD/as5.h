/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * AS #          : 5
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/16/19
 *****************************************************************************/
#ifndef AS5_H_
#define AS5_H_

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
const string AS_TITLE   = "DVD Movie List Intro to OOP";
const int    NUM     = 5;
const char   TYPE    = 'A';
const int ERROR_SIZE = 37;
const string DEF_INFILE = "Input.txt";
const string DET_OFILE  = "Output.txt";

//User Defined Types go here
enum Menu
{
	EXIT,
	BUILD,
	OUTPUT,
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
 * SwitchMenu
 * ----------------------------------------------------------------------------
 * This function does something
 *
 * RETURNS:
 * returns
 *****************************************************************************/
void GetFileName(string &iFileName, string &oFileName);

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

#endif /* AS5_H_ */
