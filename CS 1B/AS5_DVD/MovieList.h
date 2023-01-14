/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * AS #          : 5
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/16/19
 *****************************************************************************/
#ifndef MOVIELIST_H_
#define MOVIELIST_H_

//Pre-Processing Directives
#include "StackList.h"

//Global Constants


/******************************************************************************
 * MovieList Class
 * ----------------------------------------------------------------------------
 * This class Manages a list of sheep on a farm. It manages a struct and 2
 * attributes the pointer head and sheepCount
 *****************************************************************************/
class MovieList: public StackList
{
	public:
		/********************************
		 ** CONSTUCTOR & DECONSTRUCTOR **
		 ********************************/

/******************************************************************************
 * MovieList();
 * 		Constructor: Initialize class attributes
 * 		Parameters : none
 * 		Return     : none
 *****************************************************************************/
		MovieList();			//CONSTRUCTOR

/******************************************************************************
 * ~MovieList();
 * 		Destructor: does not perform any specific function
 * 		Parameters: none
 * 		Return    : none
 *****************************************************************************/
		~MovieList();		//DESTRUCTOR

		/****************
		 *   MUTATORS   *
		 ****************/

/******************************************************************************
 * void MovieMenu();
 *
 * 		Mutator: This method will provide a menu and prompt the user for a menu
 * 		option
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void MovieMenu();

/******************************************************************************
 * void CreateList(string inputFileName);
 *
 * 		Mutator: This method will create a linked list of movies
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			inFileName (string) //IN - The name of the input file being passed
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void CreateList(string inFileName);

		/****************
		 *   ACCESSORS  *
		 ****************/

/******************************************************************************
 * void OutputList(string outputFileName) const;
 *
 * 		Accessor: This method will output the list of movies
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			outFileName (string) // IN - name of the output file being passed
 * ----------------------------------------------------------------------------
 * RETURNS:
 *****************************************************************************/
		void OutputList(string outFileName) const;

/******************************************************************************
 * int GetMenuOptions() const;
 *
 * 		Accessor: This method will return the attribute menuOption
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURNS: menuOption
 *****************************************************************************/
		int GetMenuOption() const;

	private:
/******************************************************************************
 * string WordWrap (string text, size_t lineLength);
 *
 * 		Mutator: Will wrap a string after a certain length
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			text       (string) // IN - string to be wrapped
 * 			lineLength (size_t) // IN - string size of parameter
 * ----------------------------------------------------------------------------
 * RETURNS: wrapped.str()
 *****************************************************************************/
		string WordWrap (string text, size_t lineLength);

/******************************************************************************
 * void PrintClassHeader(ostream &output,
 *						 string asName,
 *					     int asNum,
 *						 char asType) const;
 *
 * 		Accessor:
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			&output (ostream)  // OUT - name of sheep to be searched
 * 			asName  (string)   // OUT - Passes in the assignment name
 * 			asNum   (integer)  // OUT - Passes in the assignment number
 * 			asType  (character)// OUT - Passes the assignment type (L/A)
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void PrintClassHeader(ostream &output,
							  string asName,
							  int asNum,
							  char asType) const;

		/******************
		 *   ATTRIBUTES   *
		 ******************/
		int menuOption;
};

#endif /*MOVIELIST_H_ */
