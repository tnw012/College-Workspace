/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #         : 12
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/3/19
 *****************************************************************************/

#ifndef SHEEP_H_
#define SHEEP_H_

//Pre-Processing Directives
#include "Animal.h"

//GLOBAL CONSTANTS

//User Defined
enum WoolType
{
	LONG,
	MEDIUM,
	FINE,
	CARPET,
};

/******************************************************************************
 * Sheep Class
 * ----------------------------------------------------------------------------
 * This class represents a sheep object. it manages 2 attributes, wool and
 * woolColor.
 *****************************************************************************/
class Sheep: public Animal
{
	public:
		/********************************
		 ** CONSTUCTOR & DESTRUCTOR **
		 ********************************/

/******************************************************************************
 * Sheep ();
 * 		Constructor: Initialize class attributes
 * 		Parameters : none
 * 		Return     : none
 *****************************************************************************/
		Sheep();			//CONSTRUCTOR

/******************************************************************************
 * ~Sheep ();
 * 		Destructor: does not perform any specific function
 * 		Parameters: none
 * 		Return    : none
 *****************************************************************************/
		~Sheep();			//DESTRUCTOR

		/****************
		 *   MUTATORS   *
		 ****************/

/******************************************************************************
 * void InitializeSheep(string inFileName, Sheep sheepAr[], int arraySize);
 * 		Mutator: This method will ititialize the sheep object adding values
 * 		to its attributes and its parent class animals attributes. It then
 * 		initializes an array of sheep
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			inFileName (string) //IN - the name of the file being passed
 * 			sheepAr    (Sheep)  //IN - the array that is being passed in
 * 			arraySize  (integer)//IN - the size of the array
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void InitializeSheep(string inFileName, Sheep SheepAr[], int arraySize);

/******************************************************************************
 * WoolType ConvertWool(string type);
 * 		Mutator: This method will convert the string value for the wool type to
 * 		an enumeration data type
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			type (string) //IN - The wool type to be converted
 * ----------------------------------------------------------------------------
 * RETURNS: woolType
 *****************************************************************************/
		WoolType ConvertWool(string type);

/******************************************************************************
 * void SetWool (WoolType woolType, string color);
 * 		Mutator: This method will set the wool and woolColor attributes of
 * 		the sheep
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			woolType (WoolType)//IN - value to set the wool type
 * 			color    (string)  //IN - vaue  to set the wool color
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void SetWool(WoolType woolType, string color);

		/****************
		 *   ACCESSORS  *
		 ****************/

/******************************************************************************
 * WoolType GetWool() const;
 * 		Accessor: This method will return the wool type of the sheep
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURNS: wool
 *****************************************************************************/
		WoolType GetWool() const;

/******************************************************************************
 * string GetColor() const;
 * 		Accessor: This method will return the color of the sheep's wool
 * ----------------------------------------------------------------------------
 * Parameters:none
 * ----------------------------------------------------------------------------
 * RETURNS: woolColor
 *****************************************************************************/
		string GetColor() const;

/******************************************************************************
 * void DisplayTable(Sheep sheepAr[], int arraySize) const;
 * 		Accessor: This method will display the sheep in a table format
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			sheepAr   (Sheep)  // IN  - Passes in an array of sheep
 * 			arraySize (integer)// IN  - The size of the array
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void TableHeader() const;

/******************************************************************************
 * void DisplayTable(Sheep sheepAr[], int arraySize) const;
 * 		Accessor: This method will display the sheep in a table format
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			sheepAr   (Sheep)  // IN  - Passes in an array of sheep
 * 			arraySize (integer)// IN  - The size of the array
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void DisplayTable(Sheep SheepAr[], int arraySize) const;

	private:
		WoolType wool;      	  // type of the sheep has
		string   woolColor; 	  // color of the sheep's coat

};
#endif /* SHEEP_H_ */
