/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * Student ID    : 1130500 , 276308
 * LAB #         : 12
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/21/19
 *****************************************************************************/

#ifndef LAB12_H_
#define LAB12_H_

//Pre-Processing Directives
#include <iostream> /*cou/cin */
#include <iomanip>  /*setw */
#include <ios>      /*streamsize */
#include <fstream>  /*ifstream/ofstream */
#include <ostream>  /*ostream */
#include <sstream>  /* */
#include <string>   /*string */
#include <limits>   /*numeric_limits */

using namespace std;

//Global Constants
const int MAX_WIDTH = 75;
const int ERROR_SIZE = 37;

//User Defined Types go here

enum Menu
	{
		EXIT,
		INITIAL,
		AGE,
		VALUE,
		DISPLAY,
	};

//Defines a class of type Animal
class Animal
{
	public:

		//CONSTRUCTOR / DESTRUCTOR
		Animal ();
		~Animal ();

		//MUTATORS
/******************************************************************************
 * SetInitialValues
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
		void SetInitialValues (string aName, //IN - Passes a name
							   string aType, //IN - Passes the type
							   int aAge,     //IN - Passes the age
							   float aValue);//IN - Passes the value(decimal)

/******************************************************************************
 * ChangeAge
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
		void ChangeAge (int aAge);

/******************************************************************************
 * ChangeValue
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
		void ChangeValue (float aValue);//IN - Passes in a decimal type number

		//ACCESSORS
/******************************************************************************
 * Display
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
		void Display () const;

/******************************************************************************
 * GetName
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
		string GetName () const;

/******************************************************************************
 * GetType
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
		string GetType () const;

/******************************************************************************
 * GetAge
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
		int GetAge () const;

/******************************************************************************
 * GetValue
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
		float GetValue () const;

	private:
		string   name;//Stores the name of the animal
		string   type;//Stores what type of animal it is
		int       age;//Stores the age of the animal
		float   value;//Store the value of the animal
};

// Prototypes
/******************************************************************************
 * PrintClassHeader
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * Displays the class header
 *****************************************************************************/
void PrintClassHeader (ostream &output,//OUT - Passes where the header outputs
					   string asName,  //OUT - Passes in the assignment name
					   int asNum,      //OUT - Passes in the assignment number
					   char asType);   //OUT - Passes the assignment type (L/A)

/******************************************************************************
 * Menu
 * ----------------------------------------------------------------------------
 * This function outputs a menu and prompts the user for a choice and error
 * checks the inputs displaying the proper error messages
 *
 * RETURNS: choice
 * Returns a menu choice from the user
 *****************************************************************************/
int Menu(int run);




#endif /* LAB12_H_ */
