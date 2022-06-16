/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGNMENT #4 : Input & Output - New Salary
 * CLASS         : CS1A
 * SECTION       : TTH-11A
 * DUE DATE      : 3/28/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*****************************************************************************
 * INPUT & OUTPUT - NEW SALARY
 * ---------------------------------------------------------------------------
 * This program will read in two values and output the sum and average.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		fullName             - The employee's name
 *      currentAnnualSalary  - The employee's current annual salary.
 *      percentIncrease      - The increase in percentage of the Salary.
 * OUTPUT:
 *      newAnnualSalary      - The employee's new annual salary.
 *      newMonthlySalary     - The employee's new monthly salary.
 *      retroPayDue          - The back pay that is owed to the employee.
 *****************************************************************************/

int main ()
{
	/*************************************************************************
	 * CONSTANT
	 * -----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMERS : Trevin Wolfe
	 * CLASS       : CS1A
	 * SECTION     : TTH-11A
	 * ASSIGN_NUM  : Assignment 4
	 * ASSIGN_NAME : Input & Output - New Salary
	 *************************************************************************/

	const char PROGRAMMER[31]  = "Trevin Wolfe";
	const char CLASS[5]		   = "CS1A";
	const char SECTION[8]	   = "TTH-11A";
	const char ASSIGN_NUM[6]   = "4";
	const char ASSIGN_NAME[28] = "Input & Output - New Salary";

	/*************************************************************************
	 * OUTPUT - CLASS HEADING
	 *************************************************************************/

	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
	cout << "*  "	   << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "	   << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  ASSIGN #"          << setw(6)    << ASSIGN_NUM << ": ";
	cout << ASSIGN_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/*************************************************************************
	 *CONSTANTS
	 *************************************************************************/

	const int PROMPT_COLW  = 29;   // IN     - Sets the width for the input.
	const int RETRO_MONTHS = 6;    // CALC   - Number of retroactive months.

    /*************************************************************************
     * VARIABLES
     *************************************************************************/

	// INPUT
	char fullName[31];           // IN & OUT   - Employee's full name.
	float currentAnnualSalary;   // IN & CALC  - Employee's current salary.
	float percentIncrease;       // IN & CALC  - Percentage increase on salary.

	currentAnnualSalary = 0.0;

	// OUTPUT
	double newAnnualSalary;      // OUT & CALC - Employee's new salary.
	double newMonthlySalary;     // OUT & CALC - Employee's new monthly salary.
	double retroPayDue;          // OUT & CALC - Retroactive pay that is due.

	newAnnualSalary = 0.0;
	newAnnualSalary = 0.0;
	retroPayDue     = 0.0;

	// PROCESSING
	double currentMonthlySalary; // CALC       - Employee's current salary
	double salaryIncrease;       // CALC       - Employee's increase in salary.
	double retroPay;             // CALC       - Retroactive pay for one month.

	currentMonthlySalary = 0.0;
	salaryIncrease       = 0.0;
	retroPay             = 0.0;

	/*************************************************************************
	 * INPUT - reads in three inputs from the user
	 * 		   (name, currentAnnualSalary, and percentIncrease)
	 *************************************************************************/

	cout << left;
	cout << setw(PROMPT_COLW) << "What is your name? ";
	cin.getline(fullName, 31);

	cout << setw(PROMPT_COLW) << "What is your current salary? ";
	cin  >> currentAnnualSalary;

	cout << setw(PROMPT_COLW) << "What is your pay increase? ";
	cin  >> percentIncrease;
	cin.ignore(10000,'\n');
	cout << endl;
	cout << right;


 	/*************************************************************************
	 * PROCESSING - Calculates the new annual salary, new monthly salary, and
	 * 				the retroactive pay the employee is due.
	 *************************************************************************/

		salaryIncrease       = currentAnnualSalary * percentIncrease;
		currentMonthlySalary = currentAnnualSalary / 12;
		newAnnualSalary      = currentAnnualSalary + salaryIncrease;
		newMonthlySalary     = newAnnualSalary / 12;
		retroPay             = newMonthlySalary - currentMonthlySalary;
		retroPayDue          = retroPay * RETRO_MONTHS;

    /*************************************************************************
     * OUTPUT - Employee's new annual and monthly salary plus the retroactive
     * 			pay that the employee is due.
     *
     * SAMPLE - "Employee's name" SALARY INFORMATION
     *          New Salary     Monthly Salary     Retroactive Pay
     *            90000.00            7875.00             2250.00
     *************************************************************************/

	cout << fullName << "'s " << "SALARY INFORMATION" << endl;
	cout << left;
	cout << setw(10) << "New Salary";
	cout << right;
	cout << setw(19) << "Monthly Salary";
	cout << setw(20) << "Retroactive Pay" << endl;

	cout << setprecision(2) << fixed;
	cout << setw(10) << newAnnualSalary << setw(19) << newMonthlySalary;
	cout << setw(20) << retroPayDue << endl;

	return 0;

}
