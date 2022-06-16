/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * AS #          : 5
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/16/19
 *****************************************************************************/
#include "StackList.h"
#include "MovieList.h"

/*****************************************************************************
 * Assignment #5 - DVD Movie List Intro to OOP
 * ---------------------------------------------------------------------------
 * This program will prompt the user for the names of an input file and an
 * output file. It will then read in a list of movies and the information
 * regarding each movie into a linked list. It will then display a
 * menu that the user is able interact with and obtain data that is then
 * output to the output file specified in the prompt.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		menuChoice - Stores a menu choice
 * 		inFileName - Stores the name of an input file
 * OUTPUT:
 *		oFileName  - Stores the name of an output file
 * OBJECTS:
 * 		MovieList  - Stores a movie list
 *****************************************************************************/
int main()
{
/*****************************************************************************
 * VARIABLES
 *****************************************************************************/
	int menuChoice;     //IN & CALC - Stores a menu choice
	string inFileName;  //IN        - Stores the name of an input file
	string oFileName;   //OUT       - Stores the name of an output file

	//Objects
	MovieList MovieList;//IN & OUT  - Stores the movie list

	//FILE STREAM
	ifstream inFile;	//IN        - Used for opening the input file
	ofstream outFile;   //OUT       - Used for closing the output file

	//INITIALIZATION
	menuChoice = 0;

/******************************************************************************
 * OUTPUT - Outputs the class header
 *****************************************************************************/

	//Function PrintClassHeader - Outputs the class header
	PrintClassHeader(cout, AS_TITLE, NUM, TYPE);

/******************************************************************************
 * INPUT - Prompts the user for an input and output file name. Based on the
 * input file name the program will populate a linked list of movies
*****************************************************************************/

	//Function GetFileName - Gets the names of the input and output files
	GetFileName(inFileName, oFileName);

//cerr << inFileName << endl;
//cerr << oFileName  << endl;

	//Method MovieMenu - outputs a menu for the user
	MovieList.MovieMenu();

	//Method GetMenuOption - returns the menu option
	menuChoice = MovieList.GetMenuOption();

/******************************************************************************
 * PROCESSING - Takes the menu choice and builds the list from an input file or
 * output all of the movies to an output file
 *****************************************************************************/
	while(menuChoice != EXIT)
	{
		switch(menuChoice)
		{
			case BUILD:
			{
				//Method CreateList - creates and populates a movie list
				MovieList.CreateList(inFileName);

				break;
			}
			case OUTPUT:
			{
				//Method OutputList - outputs the movie list
				MovieList.OutputList(oFileName);
				break;
			}
			default:
			{
				cout << "No menu choice";
				break;
			}
		}//END switch(choice)

		//Method MovieMenu - outputs a menu for the user
		MovieList.MovieMenu();

		//Method GetMenuOption - returns the menu option
		menuChoice = MovieList.GetMenuOption();

	}//END while(menuChoice != EXIT)

	return 0;
}
