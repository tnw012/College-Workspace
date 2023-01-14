/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 1
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 9/17/19
 *****************************************************************************/

#include "as1.h"

/*****************************************************************************
 * Functions and Array's
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
	const string WHAT_INFILE = "What input file do you want to use. ";
	const string WHAT_OFILE  = "What output file do you want to use. ";
	const string SEARCH_FOR  = "Who do you wish to search for "
							   "(enter done to exit): ";

/*****************************************************************************
 * VARIABLES
 *****************************************************************************/

	float totalCusBalance;       //IN & CALC - Stores the sum of all balances
	float avgCusBalance;         //IN & CALC - Stores average of all balances
	int index;                   //IN & CALC - Stores index from functions
	int menuChoice;              //IN & CALC - Stores the value from the menu
	int nameResult;              //CALC & CALC- Search name stored as an index
	int largerBalance;           //CALC & CALC- Stores the largest balance
	int smallerBalance;          //CALC & CALC- Stores the smallest balance
	string findName;             //
	string inFileName;           //IN & IN - Stores the name of the in file
	string outFileName;          //IN & OUT- Stores the name of the out file
	float  cusBalanceAr[AR_SIZE];//IN & CALC- Stores an array of balances
	int    cusIdAr[AR_SIZE];     //IN & CALC- Stores an array of id's
	string cusNameAr[AR_SIZE];   //IN & CALC- Stores an array of name's

	ifstream inFile;             //IN & IN  - Stores the name of the in file
	ofstream outFile;            //IN & OUT - Stores the name of the out file

	index            = 0;
	totalCusBalance  = 0.0;
	avgCusBalance     = 0.0;


/*****************************************************************************
 * OUTPUT - CLASS HEADING
 *****************************************************************************/

	//Function -PrintClassHeader ---> Console
	PrintClassHeader(cout, "Functions and Arrays", 1, 'A');

/*****************************************************************************
 * INPUT - Prompts the user for an input and output file name. Then displays
 *         menu and prompts the user for a menu option.
 *****************************************************************************/

	//Names and opens the input file
	cout << WHAT_INFILE;
	getline(cin,inFileName);
	inFile.open(inFileName.c_str());

	//Names the output file
	cout << WHAT_OFILE;
	getline(cin,outFileName);
	cout << endl;

	//Function - InputUserInfo
	InputUserInfo(inFile, cusNameAr, cusIdAr, cusBalanceAr, AR_SIZE);

	inFile.close();//Close input File

	//Opens the output file
	outFile.open(outFileName.c_str());


//cerr << cusNameAr[2] << endl;
//cerr << cusIdAr[2] << endl;
//cerr << cusBalanceAr[2] << endl;

	cout << "MENU OPTIONS \n\n";
	cout << "1 - Find the larger balance\n";
	cout << "2 - Find the smaller balance\n";
	cout << "3 - Obtain the sum of all balances\n";
	cout << "4 - Obtain the average of all sums\n";
	cout << "5 - Find a person\n";
	cout << "0 - Exit\n";

	cout << "Enter an option (0 to exit): ";
	cin  >> menuChoice;
	cin.ignore(1000, '\n');
	cout << endl;

/*****************************************************************************
 * PROCESSING - Uses the menu option stored in menuChoice to determine what to
 * 				process.
 *****************************************************************************/

	//Function - PrintClassHeader ---> output file
	PrintClassHeader(outFile, "Functions and Arrays", 1, 'A');

	while (menuChoice != 0)
	{
		switch(menuChoice)
		{
			case 1:
				cout << "Finding the largest balance...\n\n";
				                //Function - SearchBalance
				largerBalance = SearchBalance(menuChoice, cusBalanceAr,
										      AR_SIZE);
				index = largerBalance;
				break;

			case 2:
				cout << "Finding the smaller balance...\n\n";
								//Function - SearchBalance
				smallerBalance = SearchBalance(menuChoice, cusBalanceAr,
					                           AR_SIZE);
				index = smallerBalance;
				break;

			case 3:
				cout << "Obtaining the sum of all balances... \n\n";
								  //Function - GetSumOrAvg
			    totalCusBalance = GetSumOrAvg(menuChoice, cusBalanceAr,
											  AR_SIZE);
				break;

			case 4:
				cout << "Obtaining the average of all balances...\n\n";
								//Function - GetSumOrAvg
				avgCusBalance = GetSumOrAvg(menuChoice, cusBalanceAr,
											AR_SIZE);
				break;

			case 5:
				cout << SEARCH_FOR;
				getline(cin,findName);

				if (findName != "done")
				{
								//Function - SearchForName
					nameResult = SearchForName(findName, cusNameAr, AR_SIZE);

					if (nameResult == -1)
					{
						cout << findName << " was not found.\n\n";
					}
					else
					{
						cout << "Found.\n\n";
						index = nameResult;
					}
				}
				break;

			default: cout << "Thank you for using my program.\n\n";
				break;
		}//END switch(menuChoice

/*****************************************************************************
 * OUTPUT - Uses the same process as processing but instead it output to a
 * 			text file.
 *****************************************************************************/

		if (nameResult != -1)
		{   //PrintToFile Function
			PrintToFile(outFile, menuChoice, cusNameAr[index], cusIdAr[index],
					    cusBalanceAr[index], totalCusBalance, avgCusBalance);
		}

//cerr << endl << largerBalance << endl;
//cerr << endl << smallerBalance << endl;

/*****************************************************************************
 * INPUT - Redisplays the menu and allows the user to pick another option
 * 		   from the menu
 *****************************************************************************/

			cout << "MENU OPTIONS \n\n";
			cout << "1 - Find the larger balance\n";
			cout << "2 - Find the smaller balance\n";
			cout << "3 - Obtain the sum of all balances\n";
			cout << "4 - Obtain the average of all sums\n";
			cout << "5 - Find a person\n";
			cout << "0 - Exit\n";

			cout << "Enter an option (0 to exit): ";
			cin  >> menuChoice;
			cin.ignore(1000, '\n');
			cout << endl;
		}// End While(menuChoice != 0)

	outFile.close();//Closes the outputFile

	return 0;