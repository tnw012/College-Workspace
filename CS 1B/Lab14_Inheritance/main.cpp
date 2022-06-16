/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * Student ID    : 1130500 , 276308
 * LAB #         : 14
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/12/19
 *****************************************************************************/
#include "Animal.h"
#include "lab14.h"
#include "Sheep.h"
#include "Pig.h"

/*****************************************************************************
 * Inheritance, Overloading, & Redfining
 * ---------------------------------------------------------------------------
 * description
 * ---------------------------------------------------------------------------
 * INPUT:
 *
 * OUTPUT:
 *
 *****************************************************************************/
int main()
{
	const string TITLE = "Inheritance, Overloading, & Redfining";
	const int    NUM   = 14;
	const char   TYPE = 'L';
	const string SHEEP_FILE = "Sheep.txt";
	const string PIG_FILE   = "Pig.txt";

/*****************************************************************************
 * VARIABLES
 *****************************************************************************/

	int menuChoice;
	int menuRun;
	string animalType;
	string sheepFileName;
	string pigFileName;

	//Objects
	Animal operation;
	Sheep  SheepAr[AR_SIZE];
	Pig    PigAr[AR_SIZE];

	//INITIALIZATION
	menuChoice    = 0;
	menuRun       = 0;
	sheepFileName = SHEEP_FILE;
	pigFileName   = PIG_FILE;


/******************************************************************************
 * OUTPUT - Outputs the class header
 *****************************************************************************/

	//Function PrintClassHeader - Outputs the class header
	PrintClassHeader(cout, TITLE, NUM, TYPE);

/******************************************************************************
 * PROCESSING -
 *****************************************************************************/

	//Function Menu - Displays a menu and prompts for a choice
	menuChoice = Menu(menuRun);

	while (menuChoice != EXIT)
	{

		if (menuRun == 0)
		{
			switch (menuChoice)
			{
				case INITIALIZE:
				{
					//Method InitializeSheep - Initilizes the sheep array
					SheepAr[AR_SIZE].InitializeSheep(sheepFileName, SheepAr, AR_SIZE);

					//Method InitializePig - Initilizes the pig array
					PigAr[AR_SIZE].InitializePig(pigFileName, PigAr, AR_SIZE);
					break;
				}

			}//END switch(menuChoice)
			menuRun++;
		}
		else
		{
			switch (menuChoice)
			{
				case RE_SHEEP:
				{
					//Method InitializeSheep - Initilizes the sheep array
					SheepAr[AR_SIZE].InitializeSheep(sheepFileName, SheepAr, AR_SIZE);
					break;
				}

				case RE_PIG:
				{
					//Method InitializePig - Initilizes the pig array
					PigAr[AR_SIZE].InitializePig(pigFileName, PigAr, AR_SIZE);
					break;
				}

				case CHANGE:
				{
					break;
				}

				case DISPLAY:
				{
					cout << "THE SHEEP:\n\n";

					//Displays the sheep table
					SheepAr[AR_SIZE].DisplayTable(SheepAr, AR_SIZE);

					cout << "THE PIG(S)\n\n";

					//Displays the pig table
					PigAr[AR_SIZE].DisplayTable(PigAr, AR_SIZE);
					break;
				}
			}//END switch(menuChoice)
		}//END if (menuRun == 0)

		//Function Menu - Displays a menu and prompts for a choice
		menuChoice = Menu(menuRun);
	}//END while (menuChoice != EXIT)

	cout << "Thank you for using my program";

	return 0;
}
