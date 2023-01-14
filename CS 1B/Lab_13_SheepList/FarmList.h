/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #         : 12                       LINKED LIST FARMLIST CLASS
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/3/19
 *****************************************************************************/


#ifndef FARMLIST_H_
#define FARMLIST_H_

//Pre-Processing Directives
#include "lab13.h"
#include "Sheep.h"

/******************************************************************************
 * FarmList Class
 * ----------------------------------------------------------------------------
 * This class Manages a list of sheep on a farm. It manages a struct and 2
 * attributes the pointer head and sheepCount
 *****************************************************************************/
class FarmList
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
		FarmList();			//CONSTRUCTOR

/******************************************************************************
 * ~FarmList ();
 * 		Destructor: does not perform any specific function
 * 		Parameters: none
 * 		Return    : none
 *****************************************************************************/
		~FarmList();		//DESTRUCTOR

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
		void AddSheep(Sheep newSheep);

/******************************************************************************
 * void ClearList();
 *
 * 		Mutator: This method will clear the current farm list
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void ClearList();

		/****************
		 *   ACCESSORS  *
		 ****************/

/******************************************************************************
 * Sheep FindSheep(string sheepName) const;
 *
 * 		Accessor: This method will return the sheep object that was searched
 * 		for
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			sheepName (string) // IN - name of sheep to be searched
 * ----------------------------------------------------------------------------
 * RETURNS: A sheep
 *****************************************************************************/
		Sheep FindSheep(string sheepName) const;

/******************************************************************************
 * Sheep GetFirstSheep() const;
 *
 * 		Accessor: This method will return the first sheep object in the farm
 * 		list
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURN: The first sheep in the stack/queue
 *****************************************************************************/
		Sheep GetFirstSheep() const;

/******************************************************************************
 * int TotalSheep() const;
 *
 * 		Accessor: This method will return the total number of sheep in the farm
 * 		list
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURN: The total number of sheep in the list
 *****************************************************************************/
		int TotalSheep() const;

/******************************************************************************
 * void  DisplaySheepTable() const;
 *
 * 		Accessor: This method will display all sheep in the farm list
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURN: none
 *****************************************************************************/
		void  DisplaySheepTable() const;

	private:
		struct SheepNode
		{
			Sheep currentSheep;  //Sheep object that stores the sheep
			SheepNode *next;     //Pointer to the next node or NULL
		};

		SheepNode *head;         //IN/OUT - Pointer at the head of a list
		int sheepCount;          //IN/OUT - Total number of sheep in the list
};

#endif /* FARMLIST_H_ */
