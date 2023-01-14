/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Dylan Lackey
 * Student ID    : 1130500
 * LAB #         : 6
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 10/1/19
 *****************************************************************************/

#include "lab6.h"

/*****************************************************************************
 * Structs
 * ---------------------------------------------------------------------------
 * This program will prompt the user for the names of an input file and an
 *  output file. It will then read in a list of names, id's, and balances and
 *  populate three parallel array with respective name. It will then display a
 *  menu that the user is able interact with and obtain data that is then
 *  output to the file specified in the prompt.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		inFileName - Stores the name of the input file
 * 		menuChoice - Stores the choice from the menu
 * OUTPUT:
 * 		outFileName - Stores the name of the output file
 *
 *****************************************************************************/

int main ()
{
/*****************************************************************************
 * CONSTANTS
 *****************************************************************************/

	const int AR_SIZE        = 10;
	const string WHAT_INFILE = "What input file do you want to use.  ";
	const string WHAT_OFILE  = "What output file do you want to use. ";
	const string SEARCH_FOR  = "Who do you want to search for "
							   "(enter done to exit): ";

/*****************************************************************************
 * VARIABLES
 *****************************************************************************/

	float totalCusBalance;    //IN & CALC - Stores the sum of all balances
	int index;                  //IN & CALC - Stores index from functions
	int nameResult;             //CALC & CALC- Search name stored as an index
	float sumFound;				//
	int highBalanceIndex;		//
	string findName;            //
	string inFileName;          //IN & IN - Stores the name of the in file
	string outFileName;         //IN & OUT- Stores the name of the out file
	ifstream inFile;            //IN & IN  - Stores the name of the in file
	ofstream outFile;           //IN & OUT - Stores the name of the out file

	customerRecord customer[AR_SIZE];

	index            = 0;
	//totalCusBalance  = 0.0;
	sumFound 		 = 0.0;

/*****************************************************************************
 * OUTPUT - CLASS HEADING
 *****************************************************************************/

	//Function -PrintClassHeader ---> Console
	PrintClassHeader(cout, "Structs", 6, 'L');

/*****************************************************************************
 * INPUT - Prompts the user for an input and output file name. Then displays
 *         menu and prompts the user for a menu option.
 *****************************************************************************/

	//Names and opens the input file
	cout << WHAT_INFILE;
	getline(cin,inFileName);

	//Names the output file
	cout << WHAT_OFILE;
	getline(cin,outFileName);
	cout << endl;

	//Function - InputUserInfo
	InputUserInfo(inFileName, customer, AR_SIZE);

	/*for (int i = 0; i < AR_SIZE; i++)
	{
		cout << endl << endl;
		cout << customer[i].cusName << endl;
		cout << customer[i].cusId << " ---------- " << customer[i].cusBalance << endl;
	}*/



/*****************************************************************************
 * PROCESSING - Uses the menu option stored in menuChoice to determine what to
 * 				process.
 *****************************************************************************/

	//Opens the output file
	outFile.open(outFileName);

	//Function - PrintClassHeader ---> output file
	PrintClassHeader(outFile, "Structs", 6, 'L');


	highBalanceIndex = FindExtremeValue(customer, AR_SIZE);
	PrintToFile(outFile, 1, customer[highBalanceIndex].cusName, customer[highBalanceIndex].cusId, customer[highBalanceIndex].cusBalance, 0.0);


	totalCusBalance = SumFloats(customer, AR_SIZE);
	outFile << left;
	outFile << "Total Balance for all persons:" << endl << setw(4) << '$' << totalCusBalance << endl << endl;
	outFile << right;


	cout << SEARCH_FOR;
	getline(cin,findName);

	outFile << setprecision(2) << fixed << left;
	outFile << "Search Name:\n"
		<< setw(9) << "ID #" << setw(25) << "NAME"
		<< "BALANCE DUE\n"
		<< setw(9) << "----" << setw(25)
		<< "--------------------" << setw(5) << "-----------\n";
	outFile << right;
	while (findName != "done")
	{
		//Function - SearchForName
		nameResult = SearchForName(findName, customer, AR_SIZE);

		if (nameResult != -1)
		{
			outFile << left;
			cout << left << "Found.\n\n";
			index = nameResult;
			sumFound += customer[index].cusBalance;
			outFile << setw(9) << customer[index].cusId << setw(25) <<
					customer[index].cusName << setw(4) << "$" << right << 
					setw(7) << customer[index].cusBalance << endl;
			//PrintToFile(outFile, 0, "", 0, 0.0 , 0.0);
		}
		else
		{
			cout << findName << " was not found.\n\n";
		}
		cout << SEARCH_FOR;
		getline(cin,findName);
	}

	//Output sum of all searched customers
	outFile << endl << endl;
	outFile << setw(35) << "Total Balance Due: $" << right << setw(10) << sumFound;


/*****************************************************************************
 * OUTPUT - Uses the same process as processing but instead it output to a
 * 			text file.
 *****************************************************************************/

	cout << endl << endl;
	cout << "Thank you for using my program.";
//cerr << endl << largerBalance << endl;
//cerr << endl << smallerBalance << endl;


	outFile.close();//Closes the outputFile

	return 0;
}









