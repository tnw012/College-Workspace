/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 1
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 9/17/19
 *****************************************************************************/

#include "lab6.h"

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
				 float sum)      //IN  - Passes in a sum of float
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

	if(option == 1)
	{
		output << setprecision(2) << fixed << left;
		output << "Higher Balance:\n"
			   << setw(ID_WIDTH) << "ID #" << setw(NAME_WIDTH) << "NAME"
			   << "BALANCE DUE\n"
			   << setw(ID_WIDTH) << ID_DASH << setw(NAME_WIDTH)
			   << NAME_DASH << setw(COL_SPACE) << BALANCE_DASH
			   << setw(ID_WIDTH) << id << setw(25) << name
			   << setw(4) << "$" << right << setw(7) << balance;
		output << setprecision(6) << right;
		output.unsetf(ios::fixed);
		output << endl << endl;
	}
	else
	{
		output << setprecision(2) << fixed << left;
		output << "Search Name:\n"
			   << setw(ID_WIDTH) << "ID #" << setw(NAME_WIDTH) << "NAME"
			   << "BALANCE DUE\n"
			   << setw(ID_WIDTH) << ID_DASH << setw(NAME_WIDTH)
			   << NAME_DASH << setw(COL_SPACE) << BALANCE_DASH;
			  // << setw(ID_WIDTH) << id    << setw(25) << name
			  // << setw(4) << "$" << right << balance;
		output << setprecision(6) << right;
		output.unsetf(ios::fixed);
		output << endl << endl;
	}
}
