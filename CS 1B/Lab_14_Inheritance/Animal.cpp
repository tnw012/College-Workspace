/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * Student ID    : 1130500 , 276308
 * LAB #         : 14
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/12/19
 *****************************************************************************/
#include "Animal.h"

/******************************************************************************
 * METHOD FarmList: Class Sheep (CONSTRUCTOR)
 * ----------------------------------------------------------------------------
 * This method initializes the attributes of the class
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method initializes the attributes of the class
 *****************************************************************************/
Animal::Animal()
{
	//sheepCount = 0;
	//pigCount   = 0;
	age 	   = 0;
	name.clear();
}

/******************************************************************************
 * METHOD ~FarmList: Class Sheep (DESTRUCTOR)
 * ----------------------------------------------------------------------------
 * This method clears any lists before destructing
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS: none
 *****************************************************************************/
Animal::~Animal()
{

}

/******************************************************************************
 * METHOD AddSheep: Class Sheep
 * ----------------------------------------------------------------------------
 * This method adds a new a sheep object to a current or empty farm list
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   newSheep: Has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method adds a sheep object to a list
 *****************************************************************************/
void Animal::SetValues(string animalName, int animalAge)
{
		name = animalName;
		age  = animalAge;
//cerr << name << endl;
//cerr << age << endl;
}

/******************************************************************************
 * METHOD ChangeAnimalData : Class Animal
 * ----------------------------------------------------------------------------
 * This method adds a new a sheep object to a current or empty farm list
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   newSheep: Has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method adds a sheep object to a list
 *****************************************************************************/
void Animal::ChangeAnimalData(int newAge)
{
	age = newAge;
}

void Animal::ChangeAnimalData(string newName)
{
	name = newName;
}

void Animal::ChangeAnimalData(int newAge , string newName)
{
	age = newAge;
	name = newName;

}

/******************************************************************************
 * METHOD DisplayTable: Class Animal
 * ----------------------------------------------------------------------------
 * This method displays a list of sheep in the farm list
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method displays the all the sheep in the farm list
 *****************************************************************************/
string Animal::GetName() const
{
	return name;
}

/******************************************************************************
 * METHOD DisplayTable: Class Animal
 * ----------------------------------------------------------------------------
 * This method displays a list of sheep in the farm list
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method displays the all the sheep in the farm list
 *****************************************************************************/
int Animal::GetAge() const
{
	return age;
}

/******************************************************************************
 * METHOD DisplayTable: Class Animal
 * ----------------------------------------------------------------------------
 * This method displays a list of sheep in the farm list
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method displays the all the sheep in the farm list
 *****************************************************************************/
void Animal::TableHeader() const
{
	cout << left;
	cout << setw(NAME_COL) << "NAME"
		 << setw(AGE_COL)  << "AGE";
	cout << endl;

	cout << setw(NAME_COL) << "---------"
		 << setw(AGE_COL)  << "---";
	cout << endl;
	cout << right;
}

/******************************************************************************
 * METHOD DisplayTable: Class Animal
 * ----------------------------------------------------------------------------
 * This method displays a list of sheep in the farm list
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method displays the all the sheep in the farm list
 *****************************************************************************/
void Animal::DisplayTable(Animal AnimalAr[], int arraySize) const
{
	//VARIABLE(S)
	int index;

	//INITIALIZATION
	index = 0;

	TableHeader();

	//Loops the through the array and outputs each sheeps attributes
	while (index < AR_SIZE)
	{
		cout << left;
		cout << setw(NAME_COL) << AnimalAr[index].GetName();
		cout << setw(AGE_COL)  << AnimalAr[index].GetAge();
		index++;

		cout << endl;
	}//END while (index < AR_SIZE)
}

