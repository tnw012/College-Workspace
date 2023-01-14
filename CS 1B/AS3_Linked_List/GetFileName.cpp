/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 3
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/6/19
 *****************************************************************************/
#include "as3.h"

/******************************************************************************
 * FUNCTION GetFileName
 * ----------------------------------------------------------------------------
 * This function prompts the user for an input and output file name and returns
 * the name by reference to the calling function. User puts in d as an input
 * the program will set the file names to default
 *
 * RETURNS: inputFileName & outputFileName by reference
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	   There are no pre conditions
 *
 * POST-CONDITIONS
 * 	   This function will return the name of an input and output filename
 * 	   to the called function
 *****************************************************************************/

void GetFileName (string &inputFileName, //OUT - Defines an input file name
		          string &outputFileName)//OUT - Defines an output file name
{
	const int PROMPT_WIDTH     = 62;
	const string WHAT_INFILE   = "What input file do you want to use"
			                     "(type d for default file)?";
	const string WHAT_OFILE    = "What output file do you want to use"
			                     "(type d for default file)?";
	const string ERROR_MESSAGE = "Invalid choice enter a valid file name";
	const string IN_DEFAULT    = "InputFile.txt";
	const string OUT_DEFAULT   = "OutputFile.txt";

	//VARIABLES

	//INTITALIZATION

//INPUT - Prompts the user for names of an input and output file
		cout << left;
		cout << setw(PROMPT_WIDTH) << WHAT_INFILE;
		getline(cin, inputFileName);

		cout << setw(PROMPT_WIDTH) << WHAT_OFILE;
		getline(cin, outputFileName);
		cout << endl;
		cout << right;


//PROCESSING - Sets the default filenames
	if (inputFileName == "d" || inputFileName == "D")
	{
		inputFileName  = IN_DEFAULT;
	}

	if (outputFileName == "d" || outputFileName == "D")
	{
		outputFileName = OUT_DEFAULT;
	}

	cout << endl;
}
