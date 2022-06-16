/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 3
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/6/19
 *****************************************************************************/

#ifndef AS3_H_
#define AS3_H_

//Pre-Processing Directives
#include <iostream> /*cou/cin */
#include <iomanip>  /*setw */
#include <ios>      /*streamsize */
#include <fstream>  /*ifstream/ofstream */
#include <ostream>  /*ostream */
#include <sstream>  /* */
#include <string>   /*string */
#include <limits>   /*numeric_limits */
//#include <ctype.h>  /*cou/cin */
using namespace std;

//Global Constants
const int MAX_WIDTH = 75;
const int ERROR_SIZE = 37;

//User Defined Types go here

enum Menu
	{
		EXIT,
		OUTPUT,
		TITLE,
		GENRE,
		ACTOR,
		YEAR,
		RATING,
	};

//Defines movie record
struct MovieRecord
{
	string title;
	string leadActor;
	string supActor;
	string genre;
	string altGenre;
	string synopsis;
	int    year;
	int    rating;

	MovieRecord *next;
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
* GetFileName
* -----------------------------------------------------------------------------
* This function prompts the user for an input and output file name and returns
* the name by reference to the calling function. User puts in d as an input
* the program will set the file names to default
*
* RETURNS: inputFileName & outputFileName by reference
*	-> Returns by reference the names of an input and output file
*****************************************************************************/
void GetFileName(string &inputFileName,  //OUT - Defines an input file name
		         string &outputFileName);//OUT - Defines an output file name

/******************************************************************************
 * CreateMovieList
 * ----------------------------------------------------------------------------
 * This function passes in an input file name and creates a linked list from
 * the information provided in the input file. It then returns the head pointer
 * to the linked list
 *
 * RETURNS: head
 * Returns a pointer of a linked list
 *****************************************************************************/
MovieRecord* CreateMovieList(string iFileName);//IN - Passes an input file name

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
* GetSearchInput
* -----------------------------------------------------------------------------
* This function receives a choice based on a menu option. It then prompts the
* user for a for the item they would like to search for and returns to the
* calling function the string key or number key
*
* RETURNS:  stringKey & numKey  by reference
*	-> It returns the values of stringKey or numKey
*****************************************************************************/
void GetSearchInput(string &stringKey,//OUT - Returns search key for a string
					int &numKey,   //OUT - Returns search key for an integer
					int choice);	  //IN  - Passes in a choice from a menu

/******************************************************************************
 * SearchList
 * ----------------------------------------------------------------------------
 * This function receives in a head pointer to a linked list, a choice, search
 * key, numberKey, and an out file. It then searches the linked list based on
 * the users input
 *
 * RETURNS: size
 * Returns to the calling function the number of movies found
 *****************************************************************************/
int SearchList(MovieRecord *head, //IN - Passes in a head pointer
		 	   int choice,	      //IN - Passes an integer value
			   string searchKey,  //IN - Passes a  string search key
			   int numberKey,     //IN - Passes a integer search key
			   ofstream &outFile);//IN - Passes and output file

/******************************************************************************
* WordWrap
* -----------------------------------------------------------------------------
* This function receives in a string and a line length and wraps the string at
* the specified width, and then returns the wrapped string to the main function
*
* RETURNS: wrapped.str()
*	-> Returns string wrapped at a specific link
*****************************************************************************/
string WordWrap(string text,        //IN - Passes the string to be wrapped
		        size_t line_length);//IN - Passes the length to be wrapped at

/******************************************************************************
 * OutputList
 * ----------------------------------------------------------------------------
  * This function receives head pointer of a linked list, and assigns a search
 * pointer to the list. It then outputs the entire movies collection, or a list
 * of movies based on a series of searches
 *
 * RETURNS: Nothing
 * Outputs to either a output file or to the console
 *****************************************************************************/

void OutputList(ostream &output,  //OUT - Passes where to output
				MovieRecord *head,//IN  - Passes in a linked list
				string stringKey, //IN  - Passes in a string search key
				int numKey,       //IN  - Passes in an integer search key
				int choice,       //IN  - Passes in a menu choice
				int size);        //IN  - Passes the size of the movies list

/******************************************************************************
 * OutputTitle
 * ----------------------------------------------------------------------------
 * This function receives in a pointer to a single node in a linked list and
 * outputs the node to either a output file or to the console
 *
 * RETURNS: Nothing
 * Outputs to either a output file or to the console
 *****************************************************************************/
void OutputTitle(ostream &output,  //OUT - Determines how the function outputs
				 MovieRecord *ptr);//IN  - Passes in a head pointer of a list

#endif /* AS3_H_ */
