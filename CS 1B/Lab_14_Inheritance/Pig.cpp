/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 *  #         :
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : //
 *****************************************************************************/
#include "Pig.h"

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
Pig::Pig()
{
	tail = CURL_UP;
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
Pig::~Pig()
{

}

/******************************************************************************
 * METHOD InitializePig: Class Pig
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

void Pig::InitializePig(string inFileName, Pig PigAr[], int arraySize)
{
	//VARIABLES
	int index;        //IN - Stores the values of the index for the array
	int pigAge;       //IN - Stores the value of the pigss age
	string pigName;   //IN - Stores the name of the pig
	string tailType;      //IN - Stores the tail type of the pig in a string

	//FILE STREAM
	ifstream inFile;

	//INITIALIZATIONS
	index  = 0;
	pigAge = 0;

	//Opens the input file
	inFile.open(inFileName.c_str());

	//INPUT - Reads in an input file and populates an array of sheep
	while(inFile && index < AR_SIZE)
	{
		getline(inFile,pigName);
		inFile >> pigAge;
		inFile.ignore(1000,'\n');
		getline(inFile, tailType);

		//Converts the first character of the array to upper case
		tailType[0]  = toupper(tailType[0]);

		//Method SetValues - Sets the values for the attribtues name and age
		PigAr[index].SetValues(pigName, pigAge);

		//Method SetWool - Sets the values for the attribtues wool and woolColor
		PigAr[index].SetTail(tailType);

		index++;
	}//END while(inFile.eof())

	//Closes the input file
	inFile.close();

//cerr << tail << endl;
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
void Pig::SetTail(string type)
{
	//Sets the value of tail
	if(type == "Straight")
	{
		tail = STRAIGHT;
	}
	else if (type == "Corkscrew")
	{
		tail = CORKSCREW;
	}
	else if (type == "Up")
	{
		tail = CURL_UP;
	}
	else if (type == "Right")
	{
		tail = CURL_RIGHT;
	}
	else if (type == "Left")
	{
		tail = CURL_LEFT;
	}
	else
	{
		cout << "No tail type available\n\n";
	}//END if else if
}

/******************************************************************************
 * METHOD GetTail: Class Pig
 * ----------------------------------------------------------------------------
 * This method gives the name and age attribute new values
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS:
 * 	   This method returns the tail type of the sheep
 *****************************************************************************/
TailType Pig::GetTail() const
{
	return tail;
}

/******************************************************************************
 * METHOD DisplayTable: Class Pig
 * ----------------------------------------------------------------------------
 * This method displays the object in a table format
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *		pigAr  : has to be previously defined
 *		arraySize: has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method displays the sheep in a table
 *****************************************************************************/
void Pig::TableHeader() const
{
	cout << left;
	cout << setw(NAME_COL) << "NAME"
		 << setw(AGE_COL)  << "AGE"
		 << setw(TAIL_TYPE)<< "TAILTYPE";
	cout << endl;

	cout << setw(NAME_COL) << "---------"
		 << setw(AGE_COL)  << "---"
		 << setw(TAIL_TYPE)<< "---------";
	cout << endl;
	cout << right;
}

/******************************************************************************
 * METHOD DisplayTable: Class Pig
 * ----------------------------------------------------------------------------
 * This method displays the object in a table format
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *		pigAr  : has to be previously defined
 *		arraySize: has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method displays the sheep in a table
 *****************************************************************************/
void Pig:: DisplayTable(Pig PigAr[], int arraySize) const
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
		cout << setw(NAME_COL) << PigAr[index].GetName();
		cout << setw(AGE_COL)  << PigAr[index].GetAge();

		switch (PigAr[index].GetTail())
		{
			case STRAIGHT:
			{
				cout << setw(WOOL_TYPE) << "Straight";
				break;
			}

			case CORKSCREW:
				{
					cout << setw(WOOL_TYPE) << "Corkscrew";
					break;
				}

			case CURL_UP:
				{
					cout << setw(WOOL_TYPE) << "Curl Left";
					break;
				}

			case CURL_RIGHT:
				{
					cout << setw(WOOL_TYPE) << "Curl Right";
					break;
				}

			case CURL_LEFT:
				{
					cout << setw(WOOL_TYPE) << "Curl Up";
					break;
				}

			default:
				{
					cout << setw(WOOL_TYPE) << PigAr[index].GetTail();
					break;
				}

		}//END switch (pigAr[index].GetTail())
		cout << right;
		cout << endl;

		index++;
	}//END while (index < AR_SIZE)
	cout << endl;
}
