/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 3
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/6/19
 *****************************************************************************/
#include "as3.h"

/*****************************************************************************
 * Searching Linked List
 * ---------------------------------------------------------------------------
 * This program will prompt the user for the names of an input file and an
 * output file. It will then read in a list of movies and the information
 * regarding each movie into a linked list. It will then display a
 * menu that the user is able interact with and obtain data that is then
 * output to the output file specified in the prompt.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		inFileName - Stores the name of the input file
 * 		menuChoice - Stores the choice from the menu
 * 		stringKey  - Stores the name of any string search key
 * 		numKey     - Stores the value of any integer search key
 * OUTPUT:
 * 		outFileName - Stores the name of the output file
 *
 *****************************************************************************/

int main ()
{

/*****************************************************************************
 * VARIABLES
 *****************************************************************************/

	int menuChoice;    //IN & CALC - Used to navigate the menu
	int numKey;        //IN   - Stores a value for all of the integer inputs
	int listSize;      //CALC - Stores the size each linked list
	string stringKey;  //IN   - Stores a value for all of the string inputs
	string inFileName; //IN   - Stores the name of the input file
	string outFileName;//IN   - Stores the name of the output file

	//FILE STREAM
	ofstream outFile;  //OUT  - Used to open and close an output file

	//POINTERS
	MovieRecord *head;//IN & CALC - Stores the data for the main linked list

	//INITIALIZATIONS
	head = NULL;
	menuChoice = 0;
	numKey     = 0;
	listSize   = 0;

/*****************************************************************************
 * OUTPUT - Outputs the class header and the menu
 *****************************************************************************/

	PrintClassHeader(cout, "Searching Linked List", 3, 'A');

/******************************************************************************
 * INPUT - Prompts the user for an input and output file name. Based on the
 * input file name the program will populate a linked list of movies
 *****************************************************************************/

	//Function GetFileName - Gets the names of the input and output files
	GetFileName(inFileName, outFileName);

//cerr << inFileName;
//cerr << outFileName;

//CREATE THE LINKED LIST

	//Function CreateMovieList
	head = CreateMovieList(inFileName);

	//INPUT - Gets and checks the users menu choice
	menuChoice = Menu();

/******************************************************************************
 * PROCESSING - Loops through a menu, and allows the user to search for a
 * single movie title, output the entire list, or search for a collection of
 * movies based on actor, genre, year, and ratings.
 *****************************************************************************/

	//Opens the output file for use
	outFile.open(outFileName.c_str());

	//Loops the menu until the user hits 0 then it exits the program
	while (menuChoice != EXIT)
	{
		numKey = 0;

		cout << left;

		switch (menuChoice)
		{
			//Outputs the entire list of movies
			case OUTPUT:
			{
				cout << "Listing All Movies\n\n";

				//Function PrintToFile - outputs to a file
				OutputList(outFile, head, stringKey, numKey,
							  menuChoice, listSize);

				break;
			}//END case OUTPUT

			//Processes the list based on a single title
			case TITLE:
			{
				//Function GetSearchInput - Prompts for a search key
				GetSearchInput(stringKey, numKey, menuChoice);

				//Function SearchList - searches and returns a title head node
				SearchList(head, menuChoice, stringKey, numKey, outFile);

				break;
			}//END case TITLE

			//Returns a list based a genre search
			case GENRE:
			{
				//Function GetSearchInput - Prompts for a search key
				GetSearchInput(stringKey, numKey, menuChoice);

				//Function SearchList - searches and returns a title head node
				listSize = SearchList(head, menuChoice, stringKey, numKey,
						              outFile);

				if (listSize != 0)
				{
					cout << "Found " << listSize << " movies for the genre "
						 << stringKey << endl << endl;
				}
				else
				{
					//Checks if found and output the appropriate message

					cout << "Sorry, no movies for the genre, "
					     << stringKey << " were found\n\n";
				}

				break;
			}//END case GENRE

			//Returns a list based on an actor search
			case ACTOR:
			{
				//Function GetSearchInput - Prompts for a search key
				GetSearchInput(stringKey, numKey, menuChoice);

				//Function SearchList - searches and returns a title head node
				listSize = SearchList(head, menuChoice, stringKey, numKey,
						              outFile);

				if (listSize !=0)
				{

					 cout << "Found " << listSize << " movies for the actor "
						  << stringKey << endl << endl;
				}
				else
				{
					//Checks if found and output the appropriate message
					cout << "Sorry, no movies for the actor, "
					     << stringKey << " were found\n\n";
				}

				break;
			}//END case ACTOR

			//Returns a list based on a year search
			case YEAR:
			{
				//Function GetSearchInput - Prompts for a search key
				GetSearchInput(stringKey, numKey, menuChoice);

				//Function SearchList - searches and returns a title head node
				listSize = SearchList(head, menuChoice, stringKey, numKey,
						              outFile);
				if (listSize != 0)
				{
				 cout << "Found " << listSize << " movies for the year "
					  << numKey << endl << endl;
				}
				else
				{
					//Checks found and output the appropriate message
					cout << "Sorry, no movies for the year, "
						 << numKey << " were found\n\n";
				}

				break;
			}//END case YEAR

			//Returns a list based on a rating search
			case RATING:
			{
				//Function GetSearchInput - Prompts for a search key
				GetSearchInput(stringKey, numKey, menuChoice);

				//Function SearchList - searches and returns a title head node
				listSize = SearchList(head, menuChoice, stringKey, numKey,
						              outFile);

				if (listSize != 0)
				{
					cout << "Found " << listSize << " movies for the rating "
						 << numKey << endl << endl;
				}
				else	//Checks found and output the appropriate message
				{
				 cout << "Sorry, no movies for the rating, "
					  << numKey << " were found\n\n";
				}
				break;
			}//END case RATING

			default:
			{
				cout << "EXITING\n\n";

				menuChoice = EXIT;

				break;
			}//END default
		}//END switch(menuChoice)

		cout << right;

		//INPUT - Gets and checks the users menu choice
		menuChoice = Menu();

	}//END while(menuChoice != 0)

	//closes the output file
	outFile.close();
	return 0;
}
