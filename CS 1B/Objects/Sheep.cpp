/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #         : 13
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/3/19
 *****************************************************************************/
#include "Sheep.h"

/******************************************************************************
 * METHOD Sheep: Class Sheep (CONSTRUCTOR)
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
Sheep::Sheep()
{
	name.clear();
	age = 0;
}

/******************************************************************************
 * METHOD ~Sheep: Class Sheep (DESTRUCTOR)
 * ----------------------------------------------------------------------------
 * This method has no specific function
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS: none
 *****************************************************************************/
Sheep::~Sheep()
{

}

/******************************************************************************
 * METHOD SetInitialValues: Class Sheep
 * ----------------------------------------------------------------------------
 * This method gives the name and age attribute new values
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   sheepName: Has to be previously defined
 * 	   sheepAge : Has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method sets the values for the attributes name and age
 *****************************************************************************/
void Sheep::SetInitialValues(string sheepName,//IN - value used to set the name
							 int sheepAge)    //IN - value used to set the age
{
		name = sheepName;
		age  = sheepAge;
}

/******************************************************************************
 * METHOD GetName: Class Sheep
 * ----------------------------------------------------------------------------
 * This method returns the name of the sheep object
 *
 * RETURNS: name
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method returns the name of the sheep object
 *****************************************************************************/
string Sheep::GetName() const
{
	return name;
}

/******************************************************************************
 * METHOD GetValues: Class Sheep
 * ----------------------------------------------------------------------------
 * This method returns the name and age attributes through reference
 *
 * RETURNS: name & age (reference)
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method returns the name & age of the sheep object
 *****************************************************************************/
void Sheep::GetValues(string &sheepName, int &sheepAge) const
{
	sheepName = name;
	sheepAge  = age ;
}
