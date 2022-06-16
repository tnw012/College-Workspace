/*****************************************************************************
 * AUTHORS       : Sam Liimatainen & Trevin Wolfe
 * Student ID    : 276308 & 1130500
 * LAB #10       : Lab #8 – Intro to Pointers
 * CLASS         : CS1B
 * SECTION       : MW-7:30P
 * DUE DATE      : 10-15-19
 *****************************************************************************/
#include "MyHeader.h"

int main()
{
   /***********************************************************************
	* CONSTANTS
	* ---------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING
	* ---------------------------------------------------------------------
	* ASSIGNMENT_NAME - Lab or Assignment name
	* ASSIGNMENT_TYPE - A for assignment , L for Lab
	* ASSIGNMENT_NUM  - Number of Lab or Assignment
	* ---------------------------------------------------------------------
	* OUTPUT - USED FOR FORMATTING
	* ---------------------------------------------------------------------
	* COLM_WIDTH_MENU - used for menu output
	************************************************************************/

	const string ASSIGNMENT_NAME = "Lab #8 – Intro to Pointers";
	const char   ASSIGNMENT_TYPE = 'L';
	const int    ASSIGNMENT_NUM  = 8;

	const int COLM_WIDTH_MENU = 45;

	int firstValue;     // PROC - is pointed by staticPointer

	int *staticPointer; // IN & CALC - points to address of first variable
	int *dynamicPointer;// IN & CALC - dynamically allocates a new int

	// points to address of firstValue
	staticPointer = &firstValue;

	//dynamic pointer allocates new memory
	dynamicPointer = new int;

	// CHECK for memory availability
	if(staticPointer == NULL && dynamicPointer == NULL)
	{
		cout << "Out of memory!";
	}


	// OUTPUT - Class Header
	cout << PrintHeaderUsingOSS (ASSIGNMENT_NAME,
			 	 	 	 	 	 ASSIGNMENT_TYPE,
								 ASSIGNMENT_NUM);

	do
	{
	   /***********************************************************************
		* INPUT
		***********************************************************************/
		cout << endl;
		cout << left;
		cout << setw(COLM_WIDTH_MENU)
		     << "Input the first value (enter -999 to exit)?";

		if (!(cin >> *staticPointer))
		{
			cin.clear();
			cin.ignore((numeric_limits<streamsize>::max()),'\n');
		}
		else if (*staticPointer != -999)
		{
			cout << setw(COLM_WIDTH_MENU)
				 << "Input the second value?";
			cin  >> *dynamicPointer;
			cout << endl;
			cout << right;

		   /*******************************************************************
			* OUTPUT
			*******************************************************************/
			cout <<left;
			cout << setw(16) << "The sum is:"
				 << (*staticPointer)+(*dynamicPointer);
			cout << endl;
			cout << setw(16) << "The product is:"
				 << (*staticPointer)*(*dynamicPointer);

		}// END if (*staticPointer != -999)

		cout << endl;

	}while (*staticPointer != -999); // END while (*staticPointer != -999)

	delete dynamicPointer;

	return 0;
}
