/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * STUDENT ID    : 1130500
 * ASSIGN #5     : Selection - Repetition
 * CLASS         : CS1A
 * SECTION       : TTH-11am
 * DUE DATE      : 4/23/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*****************************************************************************
 * Assignment #5 Selection - Repetition
 * ---------------------------------------------------------------------------
 * This program will prompt the user for various letter grades, convert the
 * letter grade from a character to integer value. Then calculate and output
 * the total number of grade points and the grade point average.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 	  letterGrade      : The letter grade to be input (A,B,C,D,F) 'X' exits the
 * 	                     program.
 * OUTPUT:
 * 	  totalGradePoints : Outputs the total grade points.
 * 	  gradePointAvg    : Outputs the grade point average.
 *****************************************************************************/

int main ()
{
	/*************************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------------
	 * CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMERS :Trevin Wolfe
	 * CLASS       : CS1A
	 * SECTION     : TTH-11am
	 * LAB_NUM     : #5
	 * LAB_NAME    : Selection - Repetition
	 * ------------------------------------------------------------------------
	 * SETS MAX DIGITS TO 3
	 * ------------------------------------------------------------------------
	 * PRECISION   : 3
	 * ------------------------------------------------------------------------
	 * FOR LOOP BOUNDARY
	 * ------------------------------------------------------------------------
	 * TEST_BOUND  : 3
	 *************************************************************************/

	const char PROGRAMMER[31] = "Trevin Wolfe";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[8]	  = "TTH-11A";
	const char LAB_NUM[6]	  = "5";
	const char LAB_NAME[23]   = "Selection - Repetition";


	const int PRECISION     = 3;
	const int TEST_BOUND    = 3;


	/*************************************************************************
	 * VARIABLES
	 *************************************************************************/

	// Boolean Variables
	bool letterCheck;

	// Character Variables
	char     letterGrade; // IN & CALC   - User inputs a Letter Grade.

	// Float Variables
	float  gradePointAvg; // IN & OUT    - Stores the GPA.

	// Integer Variables
	int        caseCount; // IN & OUT    - Counter for test cases.
	int       gradePoint; // CALC & CALC - Value associated with letterGrade.
	int      letterCount; // IN & CALC   - Changes the number in the prompt.
	int       pointCount; // IN & CALC   - Tracks the the number of inputs.
	int        testCount; // IN & IN     - For loop control variable.
	int totalGradePoints; // IN & CALC   - Tracks the total number of grade
						  //               points.
	caseCount  = 1;

	/*************************************************************************
	 * OUTPUT - CLASS HEADING
	 *************************************************************************/

	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  "	      << setw(14) << "CLASS"   << ": " << CLASS    << endl;
	cout << "*  "	      << setw(14) << "SECTION" << ": " << SECTION  << endl;
	cout << "*  ASSIGN #" << setw(6)  << LAB_NUM   << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/*************************************************************************
	 * INPUT - Prompts the user for a letter grade, and does an error check if
	 * 		   the input is an A,B,C,D,F, or an X. If the input is not correct
	 * 		   it displays an error message.
	 * 		   Example:
	 *
	 * 		   Enter Letter Grade #1: A
	 * 		   Enter Letter Grade #2: E
	 *
	 *		   Invalid Letter Grade.
	 *
	 *		   Enter Letter Grade #3:
	 *************************************************************************/

	for (testCount = 1 ; testCount <= TEST_BOUND ; testCount = testCount + 1)
	{
		letterCount      = 1;
		pointCount       = 0;
		totalGradePoints = 0;
		gradePointAvg    = 0.0;

		cout << "TEST CASE # " << caseCount << ':' << endl;

		do
		{
			cout << "\tEnter Letter Grade #" << letterCount << ": ";
			cin.get(letterGrade);
			cin.ignore (1000 , '\n');

			// Reads all lower case inputs to upper case.
			letterGrade = toupper(letterGrade);

			//Assignment of the boolean variable letterCheck
			letterCheck = letterGrade != 'X' &&
					      letterGrade != 'A' &&
						  letterGrade != 'B' &&
						  letterGrade != 'C' &&
						  letterGrade != 'D' &&
						  letterGrade != 'F';

			if (letterCheck)
			{
				cout << endl;
				cout << "\tInvalid letter Grade.\n\n";
			}// END... IF (letterGrade !=)

		}while (letterCheck);

	/*************************************************************************
	 * PROCESSING - Switch the value of letterGrade to a grade point integer.
	 * 				It tracks the total number of inputs with the counter
	 * 				pointCount, and calculates the total number of grade points
	 * 				using the accumulator totalGradePoints.
	 *
	 * 				Example:
	 *
	 * 				A to 4 grade point
	 * 				B to 3 grade point
	 * 				C to 2 grade point
	 * 				D to 1 grade point
	 * 				F to 0 grade point
	 *************************************************************************/

		while (letterGrade != 'X')
		{
			// Increases the prompt number. Enter Letter Grade #(letterCount).
			letterCount = letterCount + 1;

			// Switches value in letterGrade to appropriate grade point.
			switch (letterGrade)
			{
				case 'A' : gradePoint = 4;
						   break;

				case 'B' : gradePoint = 3;
						   break;

				case 'C' : gradePoint = 2;
						   break;

				case 'D' : gradePoint = 1;
				           break;

				case 'F' : gradePoint = 0;
			}// END... switch (letterGrade)

			pointCount = pointCount + 1;
			totalGradePoints = totalGradePoints + gradePoint;

	/*************************************************************************
	 * INPUT - Prompts the user for a letter grade, and does an error check if
	 * 		   the input is an A,B,C,D,F, or an X. If the input is not correct
	 * 		   it displays an error message.
	 * 		   Example:
	 *
	 * 		   Enter Letter Grade #1: A
	 * 		   Enter Letter Grade #2: E
	 *
	 *		   Invalid Letter Grade.
	 *
	 *		   Enter Letter Grade #3:
     *************************************************************************/

			do
			{
				cout << "\tEnter Letter Grade #" << letterCount << ": ";
				cin.get(letterGrade);
				cin.ignore (1000 , '\n');

				// Reads all lower case inputs to upper case.
				letterGrade = toupper(letterGrade);

				//Assignment of the boolean variable letterCheck
				letterCheck = letterGrade != 'X' &&
						      letterGrade != 'A' &&
							  letterGrade != 'B' &&
							  letterGrade != 'C' &&
							  letterGrade != 'D' &&
							  letterGrade != 'F';

				if (letterCheck)
				{
					cout << endl;
					cout << "\tInvalid letter Grade.\n\n";
				}// END... IF (letterGrade !=)

			}while (letterCheck);
		}// END... WHILE(letterGrade != 'X')

	/*************************************************************************
	 * PROCESSING - If the users hits 'X' to exit the program. The Program
	 * 				calculates if the counter pointCount is not equal to 0.
	 * 				If so then the program calculates the gradePointAvg.
	 *************************************************************************/

		if (pointCount != 0)
		{
			gradePointAvg = float(totalGradePoints) / pointCount;

	/*************************************************************************
     * OUTPUT - Outputs the total grade points and the grade point average.
     * 			Example:
     *
     * 			Total Grade Points: 9
     * 			GPA: 3.00
     *************************************************************************/

			cout << setprecision (PRECISION) << showpoint << endl;
			cout << "Total Grade Points: " << totalGradePoints << endl;
			cout << "GPA: " << gradePointAvg << endl << endl << endl;
			cout << noshowpoint;
		}// END... if (pointCount != 0)

		// Increase the test case number TEST CASE #(caseCount).
		caseCount = caseCount + 1;

	} // END... FOR (testCount)


	return 0;
}
