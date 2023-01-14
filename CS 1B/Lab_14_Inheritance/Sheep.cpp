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
	wool = LONG;
	woolColor.clear();
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
 * METHOD InitializeSheep: Class Sheep
 * ----------------------------------------------------------------------------
 * This method initializes the sheep and animal's attributes, and then creates
 * an array of sheep
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   inFileName: has to be previously defined
 * 	   sheepAr   : has to be previously defined
 * 	   arraySize : has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method sets values for the sheep attributes and animal attributes
 *****************************************************************************/
void Sheep::InitializeSheep(string inFileName, Sheep SheepAr[], int arraySize)
{
	//VARIABLES
	int index;        //IN - Stores the values of the index for the array
	int sheepAge;     //IN - Stores the value of the sheeps age
	string sheepName; //IN - Stores the name of the sheep
	string coatType;  //IN - Stores the wool type of the sheep
	string woolColor; //IN - Stores the color of the sheeps wool
	WoolType woolType;//IN - Stores the wool type in an enumeration data type

	//FILE STREAM
	ifstream inFile;

	//INITIALIZATIONS
	index    = 0;
	sheepAge = 0;

	//Opens the input file
	inFile.open(inFileName.c_str());

	//INPUT - Reads in an input file and populates an array of sheep
	while(inFile && index < AR_SIZE)
	{
		getline(inFile,sheepName);
		inFile >> sheepAge;
		inFile.ignore(1000,'\n');
		getline(inFile,coatType);
		getline(inFile,woolColor);

		//Converts the first character of the array to upper case
		coatType[0]  = toupper(coatType[0]);
		woolColor[0] = toupper(woolColor[0]);

		//Method ConvertWool - Converts the wool type
		woolType = ConvertWool(coatType);

		//Method SetValues - Sets the values for the attribtues name and age
		SheepAr[index].SetValues(sheepName, sheepAge);

		//Method SetWool - Sets the values for the attribtues wool and woolColor
		SheepAr[index].SetWool(woolType, woolColor);

		index++;
	}//END while(inFile.eof())

	//Closes the input file
	inFile.close();
}

/******************************************************************************
 * METHOD ConvertWool: Class Sheep
 * ----------------------------------------------------------------------------
 * This method converts the wool type from a string to a enumeration type data
 * value
 *
 * RETURNS: woolType
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 		type: has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method returns the wool type via an enum
 *****************************************************************************/
WoolType Sheep::ConvertWool(string type)
{
	WoolType woolType;//OUT - Stores the value of the wool type

	//Converts the wool type from a string value to an enumerations value
	if(type == "Long")
	{
		woolType = LONG;
	}
	else if (type == "Medium")
	{
		woolType = MEDIUM;
	}
	else if (type == "Fine")
	{
		woolType = FINE;
	}
	else if (type == "Carpet")
	{
		woolType = CARPET;
	}
	else
	{
		cout << "No wool type available";
	}

	return woolType;
}

/******************************************************************************
 * METHOD SetWool: Class Sheep
 * ----------------------------------------------------------------------------
 * This method gives the wool and woolColor attribute new values
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   woolType: has to be previously defined
 * 	   color   : has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method sets the attributes wool and woolColor for the sheep
 *****************************************************************************/
void Sheep::SetWool(WoolType woolType, string color)
{
	wool      = woolType;
	woolColor = color;
}

/******************************************************************************
 * METHOD GetWool: Class Sheep
 * ----------------------------------------------------------------------------
 * This method gives the name and age attribute new values
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method returns the coat type of the sheep
 *****************************************************************************/
WoolType Sheep::GetWool() const
{
	return wool;
}

/******************************************************************************
 * METHOD GetColors: Class Sheep
 * ----------------------------------------------------------------------------
 * This method gives the name and age attribute new values
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method returns the sheep's coat color
 *****************************************************************************/
string Sheep::GetColor() const
{
	return woolColor;
}

/******************************************************************************
 * METHOD DisplayTable: Class Sheep
 * ----------------------------------------------------------------------------
 * This method displays the object in a table format
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *		sheepAr  : has to be previously defined
 *		arraySize: has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method displays the sheep in a table
 *****************************************************************************/
void Sheep::TableHeader() const
{
	cout << left;
	cout << setw(NAME_COL) << "NAME"
		 << setw(AGE_COL)  << "AGE"
		 << setw(WOOL_TYPE)<< "WOOLTYPE"
		 << setw(COLOR)    << "COLOR";
	cout << endl;

	cout << setw(NAME_COL) << "---------"
		 << setw(AGE_COL)  << "---"
		 << setw(WOOL_TYPE)<< "--------"
		 << setw(COLOR)    << "-----";
	cout << endl;
	cout << right;
}

/******************************************************************************
 * METHOD DisplayTable: Class Sheep
 * ----------------------------------------------------------------------------
 * This method displays the object in a table format
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *		sheepAr  : has to be previously defined
 *		arraySize: has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method displays the sheep in a table
 *****************************************************************************/
void Sheep::DisplayTable(Sheep SheepAr[], int arraySize) const
{
	//VARIABLES
	int index;

	//INITIALIZATIONS
	index = 0;

	TableHeader();

	//Loops the through the array and outputs each sheeps attributes
	while (index < arraySize)
	{
		cout << left;
//		cout << setw(NAME_COL) << SheepAr[index].GetName();
//		cout << setw(AGE_COL)  << SheepAr[index].GetAge();

		switch (SheepAr[index].GetWool())
		{
			case LONG:
			{
				cout << setw(WOOL_TYPE) << "Long";
				break;
			}

			case MEDIUM:
			{
				cout << setw(WOOL_TYPE) << "Medium";
				break;
			}

			case FINE:
			{
				cout << setw(WOOL_TYPE) << "Fine";
				break;
			}

			case CARPET:
			{
				cout << setw(WOOL_TYPE) << "Carpet";
				break;
			}

			default:
			{
				cout << setw(WOOL_TYPE) << SheepAr[index].GetWool();
				break;
			}
		}//END switch(x[index].GetWool())

		cout << setw(WOOL_TYPE)<< SheepAr[index].GetWool();
		cout << setw(COLOR)    << SheepAr[index].GetColor();
		cout << right;

		index++;

		cout << endl;
	}//END while (index < AR_SIZE)
}
