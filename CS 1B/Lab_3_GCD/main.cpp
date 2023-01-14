/******************************************************************************
 * AUTHOR     : Trevin Wolfe & Julian Lasting
 * STUDENT ID : 1130500 & 1097778
 * LAB #3     : Functions - Greatest Common Divisor
 * CLASS      : CS1B
 * SECTION    : MW - 7:30pm
 * DUE DATE   : 11/14/2019
 *****************************************************************************/

#include "gcd.h"

/******************************************************************************
 *  Functions - Greatest Common Divisor
 * -----------------------------------------------------------------------------
 * This program allows the user to input two values which the program will
 * take in and determine the greatest common divisor between the two values
 * input by using a Euclidian algorithm.
 * -----------------------------------------------------------------------------
 * INPUTS:
 * 		valueOne
 * 		valueTwo
 *
 * OUTPUTS:
 * 		greatestCommonDivisor
 *
******************************************************************************/
int main()
{
/******************************************************************************
 * CONSTANTS
 *****************************************************************************/

	const int RUN_COUNT = 4;

/******************************************************************************
* Variables - Declarations
******************************************************************************/
	int	valueOne;		      //IN & IN    - Stores the first integer value
	int	valueTwo;		      //IN & IN    - Stores the second integer value
	int	greatestCommonDivisor;//CALC & OUT - Stores the GCD of two
					      //             integer values
	ofstream outFile;         //IN & OUT   - Output to the file "output.txt"

/******************************************************************************
* OUTPUT - Class Heading
******************************************************************************/

	StreamClassHeader(cout, "Functions - GCD", 3, 'L');

	outFile.open("output.txt");// Opens output.txt
	StreamClassHeader(outFile, "Functions - GCD", 3, 'L');


	for(int runCount = 0; runCount < RUN_COUNT; runCount++)
	{

/******************************************************************************
 * INPUT - Calls the function GetInput and reads in two integer values
 * 		  from the user.
 ******************************************************************************/

		GetInput(valueOne, valueTwo);

/******************************************************************************
 * PROCESSING - Calls the function FindGreatestCommonDivisor and uses Euclidean
 * 			   Algorithms to find the GCD of two integers
 ******************************************************************************/

		greatestCommonDivisor =	FindGreatestCommonDivisor(valueOne, valueTwo);

		if (greatestCommonDivisor != -1)
		{
			outFile << "The GCD for " << valueOne << " & "
					<< valueTwo << " = " << greatestCommonDivisor
					<< endl << endl;
		}

/******************************************************************************
 * OUTPUT - Outputs the greatest common divisor of two integers
 ******************************************************************************/

	} //END for(int runCount = 0; runCount < 4; runCount++)

	cout << "Thank you for using my GCD calculator! \n";

	outFile.close();

	return 0;
}
