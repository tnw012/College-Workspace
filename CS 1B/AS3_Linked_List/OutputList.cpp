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
 * FUNCTION OutputList
 * ----------------------------------------------------------------------------
 * This function receives head pointer of a linked list, and assigns a search
 * pointer to the list. It then searches
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		head     : has to be previously defined
 *		stringKey: has to be previously defined
 *		numKey   : has to be previously defined
 *		choice   : has to be previously defined
 *		size     : has to be previously defined
 *
 * POST-CONDITIONS
 * 	   This function will output a list of movies to either console or a file
 *****************************************************************************/
void OutputList(ostream &output,  //OUT - Passes where to output
				MovieRecord *head,//IN  - Passes in a linked list
				string stringKey, //IN  - Passes in a string search key
				int numKey,       //IN  - Passes in an integer search key
				int choice,       //IN  - Passes in a menu choice
				int size)
{
	//USED FOR THE LISTING COLUMNS
	const int MOVIE_COL  = 9;
	const int TITLE_COL  = 48;
	const int YEAR_COL   = 5;
	const int RATING_COL = 8;
	const int GENRE_COL  = 21;
	const int ACTOR_COL  = 20;
	const int LIST_MAX  = 10;

	//OUTPUTS THE WIDTH OF THE DASHES
	const int MOVIE_DASH  = 7;
	const int TITLE_DASH  = 48;
	const int YEAR_DASH   = 4;
	const int RATING_DASH = 6;
	const int GENRE_DASH  = 20;
	const int ACTOR_DASH  = 20;

	//VARIABLES
	int movieNumber;       //CALC - Tracks the number movies in the list
	int titleLength;       //CALC - Stores the string length of the title
	int leadLength;        //CALC - Stores the string length of the lead actor
	int supLength;         //CALC - Stores the string length of an actor
	MovieRecord *outputPtr;

	//INITIALIZATIONS
	movieNumber = 0;
	titleLength = 0;
	leadLength  = 0;
	supLength   = 0;
	outputPtr   = head;

/******************************************************************************
 * OUTPUT - This section outputs the list name and the formatted columns
 *****************************************************************************/

	if (size == 0)
	{
		//Changes the column message based on the menu choice
		if (choice == GENRE)
		{
			output << "Search by genre for " + stringKey + " found:\n";
		}
		else if (choice == ACTOR)
		{
			output << "Search for actor " + stringKey + " found:\n";
		}
		else if (choice == YEAR)
		{
			output << "Search for year " + to_string(numKey) + " found:\n";
		}
		else if(choice == RATING)
		{
			output << "search for rating " + to_string(numKey) + " found:\n";
		}
		else
		{
			output << "COMPLETE MOVIE LISTING\n";
		}
		//Outputs the column titles
		output << left;
		output << setw(MOVIE_COL) << "MOVIE #"
			   << setw(TITLE_COL)<< "TITLE"
			   << setw(YEAR_COL)  << "YEAR"
			   << setw(RATING_COL)<< "RATING"
			   << setw(GENRE_COL) << "GENRE"
			   << setw(GENRE_COL) << "ALT GENRE"
			   << setw(ACTOR_COL) << "LEAD ACTOR"
			   << setw(ACTOR_COL) << "SUPPORTING ACTOR" << endl;

		//Outputs the dashes for each column
		output << setfill('-') << setw(MOVIE_DASH) << '-' << " "
			   << setw(TITLE_DASH) << '-' << " "
			   << setw(YEAR_DASH)  << '-' << " "
			   << setw(RATING_DASH)<< '-' << " "
			   << setw(ACTOR_DASH) << '-' << " "
			   << setw(ACTOR_DASH) << '-' << " "
			   << setw(GENRE_DASH) << '-' << " "
			   << setw(GENRE_DASH) << '-' << " "
			   << setfill(' ') << endl;
		output << right;
	}

/******************************************************************************
 * OUTPUT - This sections outputs the movies and there data into the columns
 ******************************************************************************/

	if (choice == OUTPUT)
	{
//Loops and outputs until all the movies have been output
		while(outputPtr != NULL && movieNumber < LIST_MAX)
		{
			//sets the string lengths of each specified variable
			movieNumber += 1;
			titleLength = outputPtr->title.length();
			leadLength  = outputPtr->leadActor.length();
			supLength   = outputPtr->supActor.length();

			output << right << setw(4) << movieNumber << setw(5) << " ";

			output << left;

			//Checks if string title length is longer than column width
			if (titleLength > TITLE_COL)
			{
				output << setw(TITLE_COL)
					   << outputPtr->title.substr(0,44) + "...";
			}
			else
			{
				output << setw(TITLE_COL) << outputPtr->title;
			}

			output << setw(YEAR_COL)  << outputPtr->year
				   << right << setw(3)<< outputPtr->rating
				   << setw(5) << " "  << left
				   << setw(GENRE_COL) << outputPtr->genre
				   << setw(GENRE_COL) << outputPtr->altGenre;

			//Checks if string lead length is longer than column width
			if (leadLength > ACTOR_COL)
			{
				output << setw(ACTOR_COL)
					   << outputPtr->leadActor.substr(0,15) + "...";
			}
			else
			{
				output << setw(ACTOR_COL) << head->leadActor;
			}

			//Checks if string supporting length is longer than column width
			if (supLength > ACTOR_COL)
			{
				output << setw(ACTOR_COL)
					   << outputPtr->supActor.substr(0, 15) + "...";
			}
			else
			{
				output << setw(ACTOR_COL) << outputPtr->supActor;
			}

			output << endl;
			output << right;

			outputPtr = outputPtr -> next;
		}//END while(moviePtr != NULL)
	}
	else
	{
		//A Single movie at a time into a list of movies
		if (size < LIST_MAX)
		{
			//sets the string lengths of each specified variable
			movieNumber = size + 1;
			titleLength = outputPtr->title.length();
			leadLength  = outputPtr->leadActor.length();
			supLength   = outputPtr->supActor.length();

			output << right << setw(4) << movieNumber << setw(5) << " ";

			output << left;

			//Checks if string title length is longer than column width
			if (titleLength > TITLE_COL)
			{
				output << setw(TITLE_COL)
					   << outputPtr->title.substr(0,44) + "...";
			}
			else
			{
				output << setw(TITLE_COL) << outputPtr->title;
			}

			output << setw(YEAR_COL)  << outputPtr->year
				   << right << setw(3)<< outputPtr->rating
				   << setw(5) << " "  << left
				   << setw(GENRE_COL) << outputPtr->genre
				   << setw(GENRE_COL) << outputPtr->altGenre;

			//Checks if string lead length is longer than column width
			if (leadLength > ACTOR_COL)
			{
				output << setw(ACTOR_COL)
					   << outputPtr->leadActor.substr(0,15) + "...";
			}
			else
			{
				output << setw(ACTOR_COL) << head->leadActor;
			}

			//Checks if string supporting length is longer than column width
			if (supLength > ACTOR_COL)
			{
				output << setw(ACTOR_COL)
					   << outputPtr->supActor.substr(0, 15) + "...";
			}
			else
			{
				output << setw(ACTOR_COL) << outputPtr->supActor;
			}

			output << endl;
			output << right;
		}//END if (size < LIST_MAX)

	}//END if(choice == OUTPUT)
}
