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
 * FUNCTION CreateMovieList
 * ----------------------------------------------------------------------------
 * This function passes in an input file name and creates a linked list from
 * the information provided in the input file. It then returns the head pointer
 * of a linked list
 *
 * RETURNS: head
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	   iFileName  : has to be defined previously
 *
 * POST-CONDITIONS
 * 	   This function will return the head pointer to a linked list
 *****************************************************************************/

MovieRecord *CreateMovieList(string iFileName)//IN - Passes an input file name
{

	//VARIABLES
	MovieRecord *head;	  //IN & OUT - point to the head node in a linked list
	MovieRecord *tempPtr;//CALC      - used to store data into a node

	ifstream inputFile;//IN - Used to open the input file

	//INITIALIZATIONS
	head = NULL;
	tempPtr = NULL;
	tempPtr  = new MovieRecord;

	//Opens the input file
	inputFile.open(iFileName.c_str());

/******************************************************************************
 * INPUT - Inputs data from an input file into a temporary node and then adds
 * it to linked list. It then returns the temporary pointer to NULL
 *****************************************************************************/

	while(inputFile && tempPtr != NULL)
	{
		getline(inputFile, tempPtr -> title);
		getline(inputFile, tempPtr -> leadActor);
		getline(inputFile, tempPtr -> supActor);
		getline(inputFile, tempPtr -> genre);
		getline(inputFile, tempPtr -> altGenre);
		inputFile >> tempPtr -> year;
		inputFile >> tempPtr -> rating;

		inputFile.ignore(numeric_limits<streamsize>::max(), '\n');

		getline(inputFile, tempPtr -> synopsis);

		inputFile.ignore(numeric_limits<streamsize>::max(), '\n');

		tempPtr -> next = head;
		head = tempPtr;
		tempPtr  =new MovieRecord;
	}//END while (inputFile && moviePtr != NULL)

	//Delete the movie pointer and assigns it to null
	delete tempPtr;
	tempPtr = NULL;

	//Closes the input file
	inputFile.close();
	return head;
}
