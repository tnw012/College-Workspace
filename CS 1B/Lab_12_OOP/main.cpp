/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * Student ID    : 1130500 , 276308
 * LAB #         : 12
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/21/19
 *****************************************************************************/

#include "lab12.h"

/*****************************************************************************
 * Introduction to Object Oriented Programming
 * ---------------------------------------------------------------------------
 * This program will
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		menuChoice - Stores the value for a menu

 * OUTPUT:
 *
 *****************************************************************************/
int main ()
{
	const string TITLE = "Introduction to OOP";

/*****************************************************************************
 * VARIABLES
 *****************************************************************************/

	int animalChoice;
	int menuChoice;
	int menuRuns;
	int newAge;

	Animal fluffy;
	Animal maa;
	//Animal babe;



	//INITIALIZATIONS

	animalChoice = 0;
	menuChoice = 0;
	menuRuns   = 0;
	newAge     = 0;


/*****************************************************************************
 * OUTPUT - Outputs the class header and the menu
 *****************************************************************************/

	PrintClassHeader(cout, TITLE, 12, 'L');

	//Function Menu - Displays a menu and asks for a choice
	menuChoice = Menu(menuRuns);

	while (menuChoice != EXIT)
	{
		switch (menuChoice)
		{
			case INITIAL:
			{
			    fluffy.SetInitialValues("Fluffy", "Sheep", 1, 15000.00);
				maa.SetInitialValues("Maa", "Sheep", 3, 16520.35);
				//babe.SetInitialValues("Babe", "Pig", 2, 10240.67);

				cout << "Initializing Fluffy, Maa, & Babe";

				break;
			}//END case INITIAL

			case AGE:
			{
				cout << "CHANGE AGE:\n"
					 << "1 - Fluffy\n"
					 << "2 - Maa\n"
					 << "3 - Babe\n";
				cout << "Select the animal you\'d like to change";
				cin  >> animalChoice;
				cin.ignore(1000,'\n');

				switch (animalChoice)
				{
					case 1:
					{
						cout << "NEW AGE: ";
						cin  >> newAge;
						cin.ignore(1000,'\n');
						cout << endl;

						//fluffy.ChangeAge();
						break;
					}

					case 2:
					{
						cout << "NEW AGE: ";
						cin  >> newAge;
						cin.ignore(1000,'\n');
						cout << endl;

						//maa.ChangeAge();
						break;
					}

					case 3:
					{
						cout << "NEW AGE: ";
						cin  >> newAge;
						cin.ignore(1000,'\n');
						cout << endl;

						//babe.ChangeAge();
						break;
					}
					default:
					{
						break;
					}

				}//END switch(animalChoice)

				break;
			}//END case AGE

			case VALUE:
			{
				cout << "CHANGE VALUE:\n"
					 << "1 - Fluffy\n"
					 << "2 - Maa\n"
					 << "3 - Babe\n";
				cout << "Select the animal you\'d like to change";
				cin  >> animalChoice;
				cin.ignore(1000,'\n');

				switch (animalChoice)
				{
					case 1:
					{
						cout << "NEW VALUE: ";
						cin  >> newAge;
						cin.ignore(1000,'\n');
						cout << endl;

						//fluffy.ChangeValue();
						break;
					}

					case 2:
					{
						cout << "NEW VALUE: ";
						cin  >> newAge;
						cin.ignore(1000,'\n');
						cout << endl;

						//maa.ChangeValue();
						break;
					}

					case 3:
					{

						cout << "NEW VALUE: ";
						cin  >> newAge;
						cin.ignore(1000,'\n');
						cout << endl;

						//babe.ChangeValue();
						break;
					}

					default:
					{
						break;
					}
				}//END switch(animalChoice)
				break;
			}//END case VALUE

			case DISPLAY:
			{
				//Animal.Display();
				break;
			}//END case DISPLAY

			default:
			{
				menuChoice = EXIT;
				break;
			}//END default
		}//END switch(menuChoice)



		menuRuns++;

		//Function Menu - Displays a menu and asks for a choice
		menuChoice = Menu(menuRuns);

	}//END while(menuChoice)
	return 0;
}




