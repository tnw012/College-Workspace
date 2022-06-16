/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #         : 13
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/3/19
 *****************************************************************************/
#include "FarmList.h"

/*****************************************************************************
 * Array & Linked List of Sheep (Linked List)
 * ---------------------------------------------------------------------------
 * This program will display a menu and prompt the user for a choice. Based on
 * the choice the program can add a new sheep to a current or empty list. It
 * clear the list, output the list, search the list, and outut the firs sheep,
 * in the list.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		Sheep - Stores the name and age of a sheep

 * OUTPUT:
 * 		AnimalList - Uses a method to display all of the sheep
 *
 *****************************************************************************/
int main()
{
	const string TITLE = "Arrays & Linked Lists of Sheep";

/*****************************************************************************
 * VARIABLES
 *****************************************************************************/

	int menuChoice;  //IN & CALC - Stores a menu choice
	int sheepAge;    //IN        - Stores the age of the sheep
	int totalSheep;  //CALC      - Tracks the total number of sheep
	string sheepName;//IN        - Stores the name of the sheep
	string searchKey;//IN & CALC - Stores the name of the search key

	//Objects
	Sheep    Sheep;     //IN & CALC - Manages all the data for the sheep
	FarmList AnimalList;//IN & CALC - Manages the list of sheep

	//INITIALIZATION
	menuChoice = 0;
	sheepAge   = 0;
	totalSheep = 0;

/******************************************************************************
 * OUTPUT - Outputs the class header
 *****************************************************************************/

	//Function PrintClassHeader - Outputs the class header
	PrintClassHeader(cout, TITLE, 13, 'L');

	cout << "*************************************\n"
		 << "* WELCOME TO THE SHEEP LIST MANAGER *\n"
		 << "*************************************\n\n";

	//Function Menu - Displays a menu and gets an input from the user
	menuChoice = Menu();

/******************************************************************************
 * PROCESSING - Based on the menu choice the program then adds, searches,
 * clears, gets, or outputs a farm list of sheep
 *****************************************************************************/

	while (menuChoice != EXIT)
	{
		switch(menuChoice)
			{
				case ADD:
				{
					//Function GetSheep - Prompts the user for a name and age
					GetSheep(sheepName, sheepAge);

					//Object Sheep - Sets new values to the object attributes
					Sheep.SetInitialValues(sheepName, sheepAge);

					//Object AnimalList - Adds a sheep to a list
					AnimalList.AddSheep(Sheep);

					cout << "The Sheep...\n";
					cout << "Sheep Name: " << sheepName << endl;
					cout << "Sheep Age:"   << sheepAge  << endl;
					cout << "Has been added!\n\n";
					break;
				}//END case ADD

				case FIRST:
				{
					//Object AnimalList - Number of sheep in the list
					totalSheep = AnimalList.TotalSheep();

					if (totalSheep != 0)
					{
						//Object Sheep - Gets the first sheep in the list
						//Sheep = AnimalList.GetFirstSheep();

						//Object Sheep - Current attributes of the object
						Sheep.GetValues(sheepName, sheepAge);

						//Function OutputSheep - Outputs a sheep object
						OutputSheep (sheepName, sheepAge);

						cout << "Is at the front of the list.\n\n";
					}
					else
					{
						cout << "Nobody is in front - the list is empty!\n\n";
					}

					break;
				}//END case FIRST

				case FIND:
				{
					//Object AnimalList - Number of sheep in the list
					totalSheep = AnimalList.TotalSheep();

					if (totalSheep != 0)
					{
						cout << "Who are you looking for? ";
						getline(cin, searchKey);
						cout << endl;

						//Object AnimalList - Searches for a sheep object
						Sheep = AnimalList.FindSheep(searchKey);

						//Object Sheep - Current attributes of the object
						Sheep.GetValues(sheepName, sheepAge);

						//Function OutputSheep - Outputs a sheep object
						OutputSheep (sheepName, sheepAge);

						cout << "Has been found.\n\n";
					}
					else
					{
						cout << "There are no sheep to be found!\n\n";
					}


					break;
				}//END case FIND

				case SIZE:
				{
					//Object AnimalList - Number of sheep in the list
					totalSheep = AnimalList.TotalSheep();

					if (totalSheep == 0)
					{
						cout << "The list is empty!\n\n";
					}
					else
					{
						cout << "There are " << totalSheep
							 << " sheep in the list!"
							 << endl << endl;
					}

					break;
				}//END case SIZE

				case OUTPUT:
				{
					//Object AnimalList - Number of sheep in the list
					totalSheep = AnimalList.TotalSheep();

					if (totalSheep != 0)
					{
						//Object AnimalList - Outputs all of the sheep in the list
						AnimalList.DisplaySheepTable();

						cout << "There are " << totalSheep
							 << " sheep in the list!"
							 << endl << endl;
					}
					else
					{
						cout <<"The list is empty!\n\n";
					}

					break;
				}//END case OUTPUT

				case CLEAR:
				{
					//Object AnimalList - Number of sheep in the list
					totalSheep = AnimalList.TotalSheep();

					if (totalSheep != 0)
					{
						//Object AnimalList - Clears the farm list
						AnimalList.ClearList();

						cout << "The list has been cleared!\n\n";
					}
					else
					{
						cout <<"The list is empty!\n\n";
					}

					break;
				}//END case CLEAR

				default:
				{
					cout << "EXITING\n\n";
					menuChoice = EXIT;
					break;
				}
			}//END switch(menuChoice)

		//Function Menu - Displays a menu and gets an input from the user
		menuChoice = Menu();

	}//END switch(menuChoice != EXIT)
	return 0;
}
