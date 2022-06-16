/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * Student ID    : 1130500 , 276308
 * LAB #         : 14
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/12/19
 *****************************************************************************/


#ifndef ANIMAL_H_
#define ANIMAL_H_

//Pre-Processing Directives
#include "lab14.h"

//GLOBAL CONSTANTS
const int AGE_MIN = 0;
const int AGE_MAX = 10;

const int AGE_COL   = 5;
const int NAME_COL  = 10;
const int WOOL_TYPE = 9; //Sets the column width for the wool type output
const int COLOR     = 5; //Sets the column width for the wool color output
const int TAIL_TYPE = 9;

/******************************************************************************
 * Animal Class
 * ----------------------------------------------------------------------------
 * This class Manages a list of sheep on a farm. It manages a struct and 2
 * attributes the pointer head and sheepCount
 *****************************************************************************/
class Animal
{
	public:
		/********************************
		 ** CONSTUCTOR & DECONSTRUCTOR **
		 ********************************/

/******************************************************************************
 * Animal ();
 * 		Constructor: Initialize class attributes
 * 		Parameters : none
 * 		Return     : none
 *****************************************************************************/
		Animal();			//CONSTRUCTOR

/******************************************************************************
 * ~Animal ();
 * 		Destructor: does not perform any specific function
 * 		Parameters: none
 * 		Return    : none
 *****************************************************************************/
		~Animal();		//DESTRUCTOR

		/****************
		 *   MUTATORS   *
		 ****************/

/******************************************************************************
 * void AddSheep(Sheep newSheep);
 *
 * 		Mutator: This method will add a sheep object to a current or empty farm
 * 		list
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			newSheep (Sheep) //IN - The sheep object to be added
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void SetValues(string animalName, int animalAge);




/******************************************************************************
 * void ChangeAnimalData(int newAge);
 * void ChangeAnimalData(string newName);
 * void ChangeAnimalData(int age, string name);
 *
 * 		Mutator: This method will add a sheep object to a current or empty farm
 * 		list
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			newSheep (Sheep) //IN - The sheep object to be added
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void ChangeAnimalData(int newAge);
		void ChangeAnimalData(string newName);
		void ChangeAnimalData(int age, string name);

		/****************
		 *   ACCESSORS  *
		 ****************/

/******************************************************************************
 * void AddSheep(Sheep newSheep);
 *
 * 		Mutator: This method will add a sheep object to a current or empty farm
 * 		list
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			newSheep (Sheep) //IN - The sheep object to be added
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		string GetName() const;

/******************************************************************************
 * void GetAge(Sheep newSheep);
 *
 * 		Mutator: This method will add a sheep object to a current or empty farm
 * 		list
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			newSheep (Sheep) //IN - The sheep object to be added
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		int GetAge() const;

/******************************************************************************
 * void  DisplaySheepTable() const;
 *
 * 		Accessor: This method will display all sheep in the farm list
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURN: none
 *****************************************************************************/
		void TableHeader() const;

/******************************************************************************
 * void  DisplaySheepTable() const;
 *
 * 		Accessor: This method will display all sheep in the farm list
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURN: none
 *****************************************************************************/
		void DisplayTable(Animal AnimalAr[], int arraySize) const;

	protected:
		string name;
		int    age;
};
#endif /* ANIMAL_H_ */
