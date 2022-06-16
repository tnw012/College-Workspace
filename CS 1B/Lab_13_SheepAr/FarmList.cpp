/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * LAB #         : 13
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/3/19
 *****************************************************************************/
#include "FarmList.h"

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
FarmList::FarmList()
{
	sheepCount = 0;
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
FarmList::~FarmList()
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
void FarmList::AddSheep(Sheep newSheep)
{
	const string ERROR_MSG = "Outside of array";

	if (sheepCount < AR_SIZE)
	{
		farmArray[sheepCount] = newSheep;

		sheepCount++;
	}
	else
	{
		cout << ERROR_MSG;
	}

	cout << endl;
}

/******************************************************************************
 * METHOD ClearList: Class Sheep
 * ----------------------------------------------------------------------------
 * This method clears the current list
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method clears the list and sets head to NULL
 *****************************************************************************/
void FarmList::ClearList()
{
	sheepCount = 0;
}

/******************************************************************************
 * METHOD FindSheep: Class Sheep
 * ----------------------------------------------------------------------------
 * This method pass in a the name of a sheep to be searched for
 *
 * RETURNS: A sheep
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   sheepName: Has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method returns the sheep that was searched for
 *****************************************************************************/
Sheep FarmList::FindSheep(string sheepName) const
{
	bool found;
	int  index;

	found = false;
	index = 0;

	while(!found && index < sheepCount)
	{
		if(farmArray[index].GetName() == sheepName)
		{
			found = true;
		}
		else
		{
			index++;
		}
	}//END while(!found && index < sheepCount)
	return farmArray[index];
}

/******************************************************************************
 * METHOD GetFirstSheep: Class Sheep
 * ----------------------------------------------------------------------------
 * This method returns the first sheep object in the farm list
 *
 * RETURNS: A Sheep
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method returns the first sheep in a list
 *****************************************************************************/
Sheep FarmList::GetFirstSheep() const
{
	return farmArray[0];
}

/******************************************************************************
 * METHOD TotalSheep: Class Sheep
 * ----------------------------------------------------------------------------
 * This method show the number of sheep in the farm list
 *
 * RETURNS: sheepCount
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method returns the total number sheep in the farm list
 *****************************************************************************/
int FarmList::TotalSheep() const
{
	return sheepCount;
}

/******************************************************************************
 * METHOD DisplaySheepTable: Class Sheep
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
void FarmList::DisplaySheepTable() const
{
	const int AGE_COL  = 7;
	const int NAME_COL = 15;
	const int AGE_WID  = 7;
	const int NAME_WID = 16;

	int age;
	int index;
	string name;

	cout << left;
	cout << setw(NAME_COL) << "NAME"
		 << setw(AGE_COL)  << "AGE";
	cout << endl;
	cout << "-------------- "
		 << "---\n";

	for(index = 0; index < sheepCount; index++)
	{
		farmArray[index].GetValues(name, age);

		cout << left
		     << setw(NAME_WID) << name
		     << setw(AGE_WID)  << age
			 << right;
		cout << endl;
	}//END while(outputPtr != NULL)

	cout << endl;
}
