/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 3
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/6/19
 *****************************************************************************/

#include "as3.h"

/******************************************************************************
 * FUNCTION OutputTitle
 * ----------------------------------------------------------------------------
 * This function receives in a head pointer of a linked list and outputs the
 * linked list to either a output file or to the console
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	   *ptr : Has to be previously defined
 *
 * POST-CONDITIONS
 * 	   This function will output to either the console or to an output file
 *****************************************************************************/

void OutputTitle(ostream &output,  //OUT - Determines how the function outputs
				 MovieRecord *ptr) //IN  - Passes in a head pointer of a list

{
	//USED FOR THE SINGLE TITLE OUTPUT
	const int TITLE_WID  = 7;
	const int YEAR_WID   = 6;
	const int RATING_WID = 8;
	const int ACTOR_WID  = 18;
 	const int NAME_WID   = 25;
	const int GENRE_WID  = 9;

	//VARIABLES
	ofstream outFile;//OUT - Used to open and close the output file

/*****************************************************************************
 * OUTPUT - Formats and area for a single movie to output to
 *****************************************************************************/

	ptr -> synopsis = WordWrap(ptr -> synopsis, MAX_WIDTH);

	//Outputs the column titles
	output << ptr->title << " found\n";
	output << setfill('*') << setw(MAX_WIDTH) << '*'
		   << setfill(' ') << endl;
	output << left;
	output << setw(TITLE_WID) << "Title:"  << ptr -> title
		   << endl;

		   //Sets the column widths for the actors and genre
	output << setfill ('-') << setw(MAX_WIDTH) << '-'
		   << setfill (' ') << endl
		   << setw(YEAR_WID) << "Year:"   << setw(12) << ptr -> year
		   << setw(RATING_WID) << "Rating:" << ptr -> rating
		   << endl;

		   //Sets the column widths for the actors and genre
	output << setfill('-')    << setw(MAX_WIDTH) << '-'
		   << setfill(' ')    << endl
		   << setw(ACTOR_WID) << "Leading Actor:"
		   << setw(NAME_WID)  << ptr -> leadActor
		   << setw(GENRE_WID) << "Genre 1:" << ptr -> genre
		   << endl
		   << setw(ACTOR_WID) << "Supporting Actor:"
		   << setw(NAME_WID) << ptr -> supActor
		   << setw(GENRE_WID)  << "Genre 2:" << ptr -> altGenre
		   << endl;

		   //Sets the area for the plot
	output << setfill('-') << setw(MAX_WIDTH) << '-'
		   << setfill(' ') << endl
		   << "PLOT:" << endl
		   << ptr -> synopsis << endl
		   << setfill('*') << setw(MAX_WIDTH) << '*'
		   << setfill(' ') << endl;

	output << right;

	output << endl;
}

