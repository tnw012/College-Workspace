/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 *  #            :
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : //
 *****************************************************************************/


#ifndef CLASS_H_
#define CLASS_H_

//Pre-Processing Directives
#include "class.h"


/******************************************************************************
 * FarmList Class
 * ----------------------------------------------------------------------------
 * This class Manages a list of sheep on a farm. It manages a struct and 2
 * attributes the pointer head and sheepCount
 *****************************************************************************/
class Class
{
	public:
		/********************************
		 ** CONSTUCTOR & DECONSTRUCTOR **
		 ********************************/

/******************************************************************************
 * FarmList ();
 * 		Constructor: Initialize class attributes
 * 		Parameters : none
 * 		Return     : none
 *****************************************************************************/
		Class();			//CONSTRUCTOR

/******************************************************************************
 * ~FarmList ();
 * 		Destructor: does not perform any specific function
 * 		Parameters: none
 * 		Return    : none
 *****************************************************************************/
		~Class();		//DESTRUCTOR

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
		void TempMutator();

		/****************
		 *   ACCESSORS  *
		 ****************/

/******************************************************************************
 * Sheep FindSheep(string sheepName) const;
 *
 * 		Accessor:
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			sheepName (string) // IN - name of sheep to be searched
 * ----------------------------------------------------------------------------
 * RETURNS:
 *****************************************************************************/
		void TempAccessor() const;



		/******************
		 *   ATTRIBUTES   *
		 ******************/
	private:

};

#endif /* CLASS_H_ */
