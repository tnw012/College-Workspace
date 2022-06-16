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
 * FUNCTION SearchList
 * ----------------------------------------------------------------------------
 * This function receives in a head pointer to a linked list, a choice, search
 * key, numberKey, and an out file. It then searches the linked list based on
 * the users input
 *
 * RETURNS: size
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		head      - pointer has to be previously defined
 * 		choice    - has to be previously defined
 * 		searchKey - has to be previously defined
 * 		numberKey - has to be previously defined

 *
 * POST-CONDITIONS
 * 	   This function will return the number of movies found
 *****************************************************************************/
 int SearchList(MovieRecord *head,//IN - Passes in a head pointer
		 	 	int choice,	      //IN - Passes an integer value
				string searchKey, //IN - Passes a  string search key
				int numberKey,    //IN - Passes a integer search key
				ofstream &outFile)//IN - Passes and output file
 {
	 //VARABLES
	 bool found;            //CALC - tracks whether the search item is found
	 MovieRecord *searchPtr;//CALC - Used as a pointer that searches the list
	 int size;              //OUT  - Returns the number of movies found

	 //INITIALIZATIONS
	 found = false;
	 searchPtr = head;
	 size = 0;

/******************************************************************************
* PROCESSING - Searches through the entire list until the search pointer
  hits NULL, all the while looking for the search key that was specified
*****************************************************************************/


	 if (choice == TITLE)
	 {
		 //Performs a search for a single movie title
		 while (searchPtr != NULL && !found)
		 {
			 if (searchPtr -> title == searchKey)
			 {
				 found = true;

				 //Function OutputTitle - outputs to a file
				 OutputTitle(outFile, searchPtr);
			 }
			 else
			 {
				 searchPtr = searchPtr -> next;
			 }
		 }//END while (!found && searchPtr != NULL)

		 //Checks if found and output the appropriate message
	 	 if (found == true)
	 	 {
	 		 cout << "Found the movie " << searchKey << '!'
			      << endl << endl;
	 	 }
	 	 else
	 	 {
	 		 cout << "Sorry, the movie " <<'\"' << searchKey << '\"'
	 			  <<" was not found\n\n";
	 	 }
 	 }
	 else
	 {
		 //Looks through the entire list creating a list of movies found
		 while (searchPtr != NULL)
		 {
		 	 switch (choice)
			 {
		 	     //searching for a genre
		 	 	 case GENRE:
		 	 	 {
		 	 		 if (searchPtr->genre    == searchKey ||
		 			     searchPtr->altGenre == searchKey)
		 	 		 {
		 	 			 found = true;

		 	 			//Function OutputColumns - outputs a list of movies
		 	 			OutputList(outFile, searchPtr, searchKey,
		 	 					      numberKey, choice, size);

		 	 			//Increases the number of found nodes
		 	 			 size++;
		 	 		 }
		 	 		 break;
		 	 	 }

		 	 	 //searching for an actor regardless of role
		 	 	 case ACTOR:
		 	 	 {
		 	 		 if (searchPtr->leadActor == searchKey ||
		 	 			 searchPtr->supActor  == searchKey)
		 	 		 {
		 	 			found = true;

		 	 			//Function OutputColumns - outputs a list of movies
		 	 			OutputList(outFile, searchPtr, searchKey,
		 	 					      numberKey, choice, size);

		 	 			//Increases the number of found nodes
		 	 			size++;
		 	 		 }
		 	 		 break;
		 	 	 }//END case ACTOR

		 	 	 //Searches for a specific year
		 	 	 case YEAR:
		 	 	 {
		 	 		 if (searchPtr -> year == numberKey)
		 	 		 {
		 	 			found = true;

		 	 			//Function OutputColumns - outputs a list of movies
		 	 			OutputList(outFile, searchPtr, searchKey,
		 	 					      numberKey, choice, size);

		 	 			//Increases the number of found nodes
		 	 			size++;
		 	 		 }
		 	 		 break;
		 	 	 }

		 	 	//searching for a rating
		 	 	 case RATING:
		 	 	 {
		 	 		 if (searchPtr -> rating == numberKey)
		 	 		 {
		 	 			found = true;

		 	 			//Function OutputColumns - outputs a list of movies
		 	 			OutputList(outFile, searchPtr, searchKey,
		 	 					      numberKey, choice, size);

		 	 			//Increases the number of found nodes
						size++;
		 	 		 }
		 	 		 break;
		 	 	 }

		 	 	 //Outputs a message if no choice is picked

		 	 	 default:
		 	 	 {
		 	 		 cout << "There is nothing to search for.\n\n";
		 	 		 break;
		 	 	 }
			 }//END switch(choice)

		 	 //Moves to the next node in the list
		 	 searchPtr = searchPtr -> next;

		 }//END while (searchPtr != NULL)
	 }//END if (choice == TITLE)

	 //Deletes the search pointer to free up memory
	 delete searchPtr;
	 searchPtr = NULL;

	 return size;
 }
