/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * AS #          : 5
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 12/16/19
 *****************************************************************************/
#include "MovieList.h"

/******************************************************************************
 * METHOD MovieList: Class MovieList (CONSTRUCTOR)
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
MovieList::MovieList()
{
	menuOption = 0;
}

/******************************************************************************
 * METHOD MovieList: Class MovieList (DESTRUCTOR)
 * ----------------------------------------------------------------------------
 * This method has no specific function
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS: none
 *****************************************************************************/
MovieList::~MovieList()
{

}

/******************************************************************************
 * METHOD MovieMenu: Class MovieList
 * ----------------------------------------------------------------------------
 * This method presents a menu and prompts for a choice
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS: none
 *****************************************************************************/
void MovieList::MovieMenu()
{
	const int MENU_PROMPT = 29;
	const int MENU_MIN    = 0;
	const int MENU_MAX    = 4;

	//VARIABLES
	bool valid;//CALC- Tracks whether the input is valid or not

	//INITIALIZATIONS

	valid = false;

	//Outputs the menu and prompts the user for input
	do
	{
		cout << left;
		cout << "DVD MENU OPTIONS\n\n"
			 << "1 - Build Movie List\n"
			 << "2 - Output All Movies\n"
			 << "3 - Top Movie\n"
			 << "4 - Remove a movie\n"
			 << "0 - EXIT\n";
		cout << setw(MENU_PROMPT) << "Enter an option (0 to exit):";

		//Error checks the input
		if (!(cin >> menuOption))
		{
			cout << endl;
			cout << "**** Please input a number between 0 and 4" << " ****"
				 << endl << endl;
			//prevent infinite loop
			menuOption = -99;

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			valid = false;
		}
		else if (menuOption < MENU_MIN || menuOption > MENU_MAX)
		{
			cout << endl;

			cout << "**** " << setw(ERROR_SIZE)
				 << "The number "+to_string(menuOption)+" is an invalid entry"
				 << " ****" << endl;
			cout << "**** " << setw(ERROR_SIZE)
				 << "Please input a number between 0 and 4" << " ****"
				 << endl << endl;

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << endl;
			valid = true;
		}//END if then else if(!(cin >> choice))

		cout << right;

	}while(!valid);
}

/******************************************************************************
 * METHOD CreateList: Class MovieList
 * ----------------------------------------------------------------------------
 * This method gives the name and age attribute new values
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   inFileName: has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method creates the linked list
 *****************************************************************************/
void MovieList::CreateList(string inFileName)
{
	int numMovies;
	DVDNode *newDVD;

	//FILE STREAM
	ifstream inFile;

	//INITIALIATIONS
	numMovies = 0;
	newDVD    = NULL;
	newDVD    = new DVDNode;

/******************************************************************************
 * INPUT - Inputs data from an input file into a temporary node and then adds
 * it to linked list. It then returns the temporary pointer to NULL
 *****************************************************************************/

	//Opens the input file
	inFile.open(inFileName.c_str());

	while (inFile && newDVD != NULL)
	{
		getline(inFile, newDVD -> title);
		getline(inFile, newDVD -> leadingActor);
		getline(inFile, newDVD -> supportActor);
		getline(inFile, newDVD -> genre);
		getline(inFile, newDVD -> altGenre);
		inFile >> newDVD -> year;
		inFile >> newDVD -> rating;

		inFile.ignore(numeric_limits<streamsize>::max(), '\n');

		getline(inFile, newDVD -> synopsis);

		inFile.ignore(numeric_limits<streamsize>::max(), '\n');

		newDVD ->synopsis = WordWrap(newDVD ->synopsis, MAX_WIDTH);

		Push(newDVD);

		newDVD = new DVDNode;
		stackCount++;
	}//END while (newDVD ->synopsis)

	//Closes the input file
	inFile.close();

	delete newDVD;
	newDVD = NULL;

	if(head == NULL)
	{
		cout << "Error your list is empty\n\n";
	}
	else
	{
		numMovies = Size();
		cout << "List is made. You have " << numMovies << " movies.\n\n";
	}
}

/******************************************************************************
 * METHOD OutputList: Class MovieList
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
void MovieList::OutputList(string outFileName) const
{
	//VARIABLES
	bool empty;
	int  movieNum;
	DVDNode *printPtr;

	//FILE STREAM
	ofstream outFile;

	//INITIALIZATION
	movieNum = 0;
	printPtr = NULL;
	printPtr = head;


	//Method IsEmpty - checks to see if the list is empty or not
	empty = IsEmpty(head);

	if (empty == true)
	{
		cout << "Sorry there are no movies\n\n";
	}
	else
	{
		//Peek(cout, printPtr);
		//Closes the output file
		outFile.open(outFileName.c_str());

		PrintClassHeader(outFile, AS_TITLE, NUM, TYPE);

		while (printPtr != NULL)
		{
			Peek(outFile, printPtr, movieNum);

			movieNum++;

			printPtr = printPtr->next;
		}//END while (printPtr != NULL)

		//Closes the output file
		outFile.close();
	}//END if (empty == true)

	delete printPtr;
	printPtr = NULL;
}

/******************************************************************************
 * METHOD GetMenuOption: Class MovieList
 * ----------------------------------------------------------------------------
 * This method has no specific function
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS: none
 *
 * POST-CONDITIONS: none
 *****************************************************************************/
int MovieList::GetMenuOption() const
{
	return menuOption;
}

/******************************************************************************
 * METHOD WordWrap: Class MovieList
 * ----------------------------------------------------------------------------
 * This method returns the name of the sheep object
 *
 * RETURNS: wrapped.str()
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 		text      : has to be previously defined
 * 		lineLength: has to be previously defined
 *
 * POST-CONDITIONS:
 * 	   This method returns a string that is wrapped to a specified length
 *****************************************************************************/
string MovieList::WordWrap(string text, size_t lineLength)
{
    istringstream words(text);//CALC - Used to convert the string to a stream
    ostringstream wrapped;    //CALC - Tracks the final wrap of a string
    string word;              //CALC - Gets the length for the stream

    if (words >> word)
    {
        wrapped << word;
        size_t space_left = lineLength - word.length();
        while (words >> word)
        {
        	if (space_left < word.length() + 1)
        	{
                wrapped << '\n' << word;
                space_left = lineLength - word.length();
            }
        	else
        	{
                wrapped << ' ' << word;
                space_left -= word.length() + 1;
            }
        }//END while(words >> word)
    }//END if (words >> word)
    return wrapped.str();
}

/******************************************************************************
 * METHOD PrintClassHeader: Class MovieList
 * ----------------------------------------------------------------------------
 * This function outputs the class header either to a file or console. This is
 * determined through the parameter output.
 *
 * RETURNS: Nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	   output: Determines if the class header outputs to a file or the console
 * 	   asName: Assignment Name has to be defined in the calling function first
 * 	   asType: Assignment Type has to be defined in the calling function first
 * 	   asNum : Assignment Number has to be defined in the calling function
 * 	           first
 *
 * POST-CONDITIONS
 * 	   This function will output the class header
 *****************************************************************************/
void MovieList::PrintClassHeader(ostream &output,
								 string asName,
								 int asNum,
								 char asType) const
{
	const string PROGRAMMER = "Trevin Wolfe";
	const string CLASS      = "CS1B";
	const string SECTION    = "MW - 7:30pm";

	output << left;
	output << "**************************************************\n";
	output << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	output << "*  "	      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	output << "*  "	      << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	output << "*  ";

	// PROCESSING - This will adjust the setw and format appropriately
	//              based on if this is a lab 'L' or assignment.
	if (toupper(asType) == 'L')
	{
		output << "LAB #" << setw(9);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	}
	output << asNum << ": " << asName << endl;
	output << "**************************************************\n\n";
	output << right;
}
