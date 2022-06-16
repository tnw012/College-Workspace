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
#include "lab13.h"

/******************************************************************************
 * Sheep Class
 * ----------------------------------------------------------------------------
 * This class represents a sheep object. it manages 4 attributes, name and age.
 *****************************************************************************/
class Sheep
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
 * void SetInitialValues ();
 * 		Mutator: This method will update the name and age attributes to the
 * 		parameter sheepName and sheepAge values
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			sheepName (string) // IN - the name of the new attribute
 * 			sheepAge  (integer)// IN - the age of the new attribute
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void SetInitialValues(string sheepName, int sheepAge);

		/****************
		 *   ACCESSORS  *
		 ****************/

/******************************************************************************
 * void GetValues () const;
 * 		Accessor: This method will return the the values of the attributes
 * 		name and age through the parameters sheepName and sheepAge by reference
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			sheepName (string) // OUT - the name of the attribute
 * 			sheepAge  (integer)// OUT - the age of the attribute
 * ----------------------------------------------------------------------------
 * RETURNS: sheepName & sheepAge
 *****************************************************************************/
		void GetValues(string &sheepName, int &sheepAge) const;

/******************************************************************************
 * string GetName () const;
 * 		Accessor: This method returns the name attribute
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURNS: name (string)
 *****************************************************************************/
		string GetName() const;

	private:
		string name; //IN/OUT - The sheep's name
		int    age;  //IN/OUT - The sheep's age in years
};
#endif /* SHEEP_H_ */
