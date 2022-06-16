/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 1
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 9/17/19
 *****************************************************************************/

#include "as1.h"

/******************************************************************************
 * PrintToFile
 * ---------------------------------------------------------------------------
 *     This function will pass in a bunch values or array index's, then use a
 *     switch statement to determine which case to output either to file
 *     or console.
 * ---------------------------------------------------------------------------
 *****************************************************************************/

void PrintToFile(ostream &output,//OUT - Determines where the function outputs
		         int option,     //IN  - Passes in the choice for the switch
				 string name,    //IN  - Passes in a name or array index
				 int id,         //IN  - Passes in an id or array index
				 float balance,    //IN  - Passes in a balance or array index
				 float sum,      //IN  - Passes in a sum of floats
				 float avg)      //IN  - Passes in an avg
{
/*****************************************************************************
 * CONSTANTS
 * ----------------------------------------------------------------------------
 * OUTPUT - The a name, id, and balance and formats it as follows
 * ----------------------------------------------------------------------------
 * Larger Balance:
 * ID #     NAME                     BALANCE DUE
 * ----     --------------------     -----------
 * 1002     First Last               $   1423.20
 *****************************************************************************/

	const string AVG_BALANCE  = "Average Balance for all persons: \n";
	const string SUM_OF       = "Sum of Balance for all persons: \n";
	const string ID_DASH      = "----";
	const string BALANCE_DASH = "-----------\n";
	const string NAME_DASH    = "--------------------";
	const int COL_SPACE       = 5;
	const int NAME_WIDTH      = 25;
	const int ID_WIDTH        = 9;

/*****************************************************************************
 * PROCESSING - Uses a switch statement to decide what to output and how
 *****************************************************************************/

	switch (option)
	{
		case 1:
			output << setprecision(2) << fixed << left;
			output << "Larger Balance:\n"
				   << setw(ID_WIDTH) << "ID #" << setw(NAME_WIDTH) << "NAME"
				   << "BALANCE DUE\n"
				   << setw(ID_WIDTH) << ID_DASH << setw(NAME_WIDTH)
				   << NAME_DASH << setw(COL_SPACE) << BALANCE_DASH
				   << setw(ID_WIDTH) << id << setw(25) << name
				   << setw(4) << "$" << right << balance;
			output << setprecision(6) << right;
			output.unsetf(ios::fixed);
			output << endl << endl;
			break;

		case 2:
			output << setprecision(2) << fixed << left;
			output << "Smaller Balance:\n"
			       << setw(ID_WIDTH) << "ID #" << setw(NAME_WIDTH) << "NAME"
				   << "BALANCE DUE\n"
				   << setw(ID_WIDTH) << ID_DASH << setw(NAME_WIDTH)
			       << NAME_DASH << setw(COL_SPACE) << BALANCE_DASH
				   << setw(ID_WIDTH) << id    << setw(25) << name
				   << setw(6) << "$" << right << balance;
			output << setprecision(6) << right;
			output.unsetf(ios::fixed);
			output << endl << endl;
			break;

		case 3:
			output << left;
			output << SUM_OF << setw(4) << '$' << sum
			       << endl << endl;
			output << right;
			break;

		case 4:
			output << left;
			output << AVG_BALANCE << setw(5) << '$' << avg
				   << endl << endl;
			output << right;
			break;

		case 5:
			output << setprecision(2) << fixed << left;
			output << "Search Name:\n"
				   << setw(ID_WIDTH) << "ID #" << setw(NAME_WIDTH) << "NAME"
				   << "BALANCE DUE\n"
				   << setw(ID_WIDTH) << ID_DASH << setw(NAME_WIDTH)
				   << NAME_DASH << setw(COL_SPACE) << BALANCE_DASH
				   << setw(ID_WIDTH) << id    << setw(25) << name
				   << setw(4) << "$" << right << balance;
			output << setprecision(6) << right;
			output.unsetf(ios::fixed);
			output << endl << endl;

			break;


		default: output << "Nothing to output.";
			break;

	}//END switch(choice)
}
