/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * Student ID    : 1130500 , 276308
 * LAB #         : 12
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/21/19
 *****************************************************************************/
#include "lab12.h"

void Animal::Display() const
{
	int input; // used for menu input;

	//	Provide the following menu for the first run.
	//	1 - Initialize Animals
	//  0 - Exit
	//	Enter selection:
	//Enter selection:

	cout << left;
	cout << setw(5)  << "1 - " << "Initialize Animals";
	cout << endl;
	cout << setw(5)  << "0 - " << "Exit";
	cout << endl;
	cout << setw(17) << "Enter selection:";
	cin >> input;
	cout << right;

	cout << endl << endl << endl;

	//  After the first run provide the following menu and associated functionality.
	//	1 - Initialize Animals
	//	2 - Change Age
	//	3 - Change Value
	//	4 - Display
	//	0 - Exit
	//	Enter selection:

	cout << left;
	cout << setw(5)  << "1 - " << "Initialize Animals";
	cout << endl;
	cout << setw(5)  << "2 - " << "Change Age";
	cout << endl;
	cout << setw(5)  << "3 - " << "Change Value";
	cout << endl;
	cout << setw(5)  << "4 - " << "Display";
	cout << endl;
	cout << setw(5)  << "0 - " << "Exit";
	cout << endl;
	cout << setw(17) << "Enter selection:";
	cin >> input;
	cout << right;

	cout << endl << endl << endl;


	//	The Display option should output a table formatted like the one below:
	// --------------
	cout << left;
	cout << setw(12) << "ANIMAL" <<
			setw(17) << "NAME"   <<
			setw(7)  << "AGE"    <<
			setw(6)  << "VALUE";
	cout << endl;
	cout << setw(12) << "-----------"     <<
			setw(17) << "---------------" <<
			setw(8)  << "--- ----"        <<
			setw(9)  << "-------";
	cout << endl;
	cout << right;

	//             || variable name ||
	cout << setprecision(2) << fixed;

	cout << left;
	cout << setw(12) << "animal" <<
			setw(17) << "name";
	cout << right;
	cout << setw(3)  <<  13      <<
			setw(12) <<  1500.00 ;

	cout << setprecision(6);
	cout.unsetf(ios::fixed);

	cout << endl;


	cout << endl << endl << endl;


}
