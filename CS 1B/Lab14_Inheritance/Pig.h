/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 *  #            :
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : //
 *****************************************************************************/


#ifndef PIG_H_
#define PIG_H_
//Pre-Processing Directives
#include "Animal.h"

//GLOBAL CONSTANTS

//USER DEFINED
enum TailType
{
	STRAIGHT,
	CORKSCREW,
	CURL_UP,
	CURL_RIGHT,
	CURL_LEFT,
};

/******************************************************************************
 * Sheep Class
 * ----------------------------------------------------------------------------
 * This class represents a pig object, and it manages 1 attribute, tail.
 *****************************************************************************/
class Pig: public Animal
{
	public:

		/********************************
		 ** CONSTUCTOR & DECONSTRUCTOR **
		 ********************************/

/******************************************************************************
 * Pig ();
 * 		Constructor: Initialize class attributes
 * 		Parameters : none
 * 		Return     : none
 *****************************************************************************/
		Pig();			//CONSTRUCTOR

/******************************************************************************
 * ~Pig ();
 * 		Destructor: does not perform any specific function
 * 		Parameters: none
 * 		Return    : none
 *****************************************************************************/
		~Pig();		//DESTRUCTOR

		/****************
		 *   MUTATORS   *
		 ****************/

/******************************************************************************
 * void InitializePig(string inFileName, Sheep sheepAr[], int arraySize);
 * 		Mutator: This method will ititialize the pig object adding values
 * 		to its attributes and its parent class animals attributes. It then
 * 		initializes an array of pigs
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			inFileName (string) //IN - the name of the file being passed
 * 			pigAr      (Sheep)  //IN - the array that is being passed in
 * 			arraySize  (integer)//IN - the size of the array
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void InitializePig(string inFileName, Pig pigAr[], int arraySize);

/******************************************************************************
 * void SetTail(TailType tailType);
 * 		Mutator: This method will set the tail attribute of
 * 		the pig
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			type (string)//IN - tail type value as a string
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void SetTail(string type);

		/****************
		 *   ACCESSORS  *
		 ****************/

/******************************************************************************
 * TailType GetTail() const;
 * 		Accessor: This method will return the tail type of the pig
 * ----------------------------------------------------------------------------
 * Parameters: none
 * ----------------------------------------------------------------------------
 * RETURNS: tail
 *****************************************************************************/
		TailType GetTail() const;

/******************************************************************************
 * void DisplayTable(Pig pigAr[], int arraySize) const;
 *
 * 		Accessor: This method will display the sheep in a table format
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			pigAr     (Pig)    // IN  - Passes in an array of sheep
 * 			arraySize (integer)// IN  - The size of the array
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void TableHeader() const;

/******************************************************************************
 * void DisplayTable(Pig pigAr[], int arraySize) const;
 *
 * 		Accessor: This method will display the sheep in a table format
 * ----------------------------------------------------------------------------
 * Parameters:
 * 			pigAr     (Pig)    // IN  - Passes in an array of sheep
 * 			arraySize (integer)// IN  - The size of the array
 * ----------------------------------------------------------------------------
 * RETURNS: none
 *****************************************************************************/
		void DisplayTable(Pig PigAr[], int arraySize) const;

		/******************
		 *   ATTRIBUTES   *
		 ******************/
	private:
		TailType tail;		// Stores the value of the tail type
};

#endif /* PIG_H_ */
