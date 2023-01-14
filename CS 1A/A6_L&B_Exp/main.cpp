/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #6     : Loops & Boolean Expressions
 * CLASS         : CS1A
 * SECTION       : TTH-11am
 * DUE DATE      : 5/2/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include "Functions.h"
using namespace std;

/*****************************************************************************
 * Assignment #6 - Loops & Boolean Expressions
 * ---------------------------------------------------------------------------
 * This program will receive the gender from the candidate. Then based on the
 * gender the candidate enters the program will then take the height and weight
 * of the candidate, and determine whether the candidate was accepted or
 * rejected based on the height and weight requirements. The program will
 * then output the total number of candidates accepted and the percentage
 * of accepted candidates.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		canidateGender  : Stores the gender of the candidate as (m/M/f/F).
 * 		candidateHeight : Stores the height of the candidate.
 *      candidateWeight : stores the weight of the candidate.
 *
 * OUTPUT:
 * 		percentAccepted : Gives the percentage of recruits that are accepted
 * 		totalAccepted   : The total number of candidates that were recruited
 *****************************************************************************/

int main ()
{
/*****************************************************************************
 * CONSTANTS
 *****************************************************************************/

	// FUNCTION PrintClassHeader
	const string ASSIGN_NAME     = "Loops & Boolean Expressions";
	const int    ASSIGN_NUM      = 6;
	const char   ASSIGN_TYPE     = 'A';

	const int FEMALE_HEIGHT_MIN  = 62;  // Female height minimum requirement
	const int FEMALE_HEIGHT_MAX  = 75;  // Female height maximum requirement
	const int FEMALE_WEIGHT_MIN  = 110; // Female weight minimum requirement
	const int FEMALE_WEIGHT_MAX  = 185; // Female weight maximum requirement

	const int MALE_HEIGHT_MIN    = 65;  // Male height minimum requirement
	const int MALE_HEIGHT_MAX    = 80;  // Male height maximum requirement
	const int MALE_WEIGHT_MIN    = 130; // Male weight minimum requirement
	const int MALE_WEIGHT_MAX    = 250; // Male weight maximum requirement

/*****************************************************************************
 * VARIABLES
 *****************************************************************************/

	//INPUT
	char    candidateGender;  // IN & CALC - Stores the gender of the candidate
	int     candidateHeight;  // IN & CALC - Stores the height of the candidate
	int     candidateWeight;  // IN & CALC - Stores the weight of the candidate

	//OUTPUT
	double  percentAccepted;  // OUT & OUT  - Percent of accepted candidates
	int     totalAccepted;    // CALC & OUT - Total of accepted candidates

	//PROCESSING
	bool    acceptableHeight; // CALC & CALC - Sets the height requirements
	bool    acceptableWeight; // CALC & CALC - Sets the weight requirements
	int     totalCandidates;  // IN & OUT    - Total number of candidates
	int     testCount;        // IN & OUT    - LCV for the For Loop

/*****************************************************************************
 * OUTPUT - Calls the function PrintClassHeader and outputs the class heading
 *****************************************************************************/

	PrintClassHeader (ASSIGN_NAME, ASSIGN_NUM, ASSIGN_TYPE);

    /*************
     *   BEGIN   *
     *************/

	//BEGIN...FOR LOOP (testCount)
	for (testCount = 1 ; testCount <= 3 ; testCount ++)
	{
		totalAccepted   = 0;
		totalCandidates = 0;

		// OUTPUTS THE TEST CASE
		cout << "TEST RUN #" << testCount << endl << endl << endl;

		cout << "Please enter the candidate's information "
				"(enter 'X' to exit).\n";

/*****************************************************************************
 * INPUT - Calls the function GetGender to check and store the value in the
 * 		   variable candidateGender.
 *
 *         Example:
 *         Gender: t
 *         ***** Invalid Gender; please enter M or F. *****
 *         Gender: m
 *****************************************************************************/

		candidateGender = GetGender();

		// Processes the candidates information based on gender
		while (candidateGender != 'x' && candidateGender != 'X')
		{

/*****************************************************************************
 * INPUT - Calls the function GetHeightAndWeight. It then checks and passes
 *         by reference the two values into the variable candidateHeight and
 *         candidateWeight.
 *
 *         Height: 23
 *         ***** Invalid Height; please enter a height between 24 and 110. ****
 *         Height: 24
 *         Weight: 49
 *         ***** Invalid Weight; please a weight in lbs between 50 and 1400. **
 *         Weight: 100
 *****************************************************************************/

			GetHeightAndWeight(candidateHeight, candidateWeight);

/*****************************************************************************
 * PROCESSING - Uses 2 boolean variables to process the selection statements
 * 				that sets the MIN & MAX requirements for height and weight.
 *****************************************************************************/

		// Checks to make sure the candidate's height passes requirements
		acceptableHeight = (((candidateGender == 'M' || candidateGender == 'm')
						   &&(candidateHeight >= MALE_HEIGHT_MIN &&
							  candidateHeight <= MALE_HEIGHT_MAX)) ||
						   	((candidateGender == 'F' || candidateGender == 'f')
						   &&(candidateHeight >= FEMALE_HEIGHT_MIN &&
						      candidateHeight <= FEMALE_HEIGHT_MAX)));

		// Checks to make sure the candidate's weight passes requirements
		acceptableWeight = (((candidateGender == 'M' || candidateGender == 'm')
				           &&(candidateWeight >= MALE_WEIGHT_MIN &&
							  candidateWeight <= MALE_WEIGHT_MAX)) ||
						    ((candidateGender == 'F' || candidateGender == 'f')
						   &&(candidateWeight >= FEMALE_WEIGHT_MIN &&
							  candidateWeight <= FEMALE_WEIGHT_MAX)));

//cerr << endl << "TESTING!\n" <<  acceptableHeight << endl << acceptableWeight
	// << endl;

/*****************************************************************************
 * OUTPUT - Uses an IF-THEN-ELSE-IF statement to determine whether the
 * 			candidates are accepted or rejected. If they are accepted the
 * 			program outputs a message, and increments the total number of
 * 			candidates accepted.
 *
 * 			Example:
 * 				This candidate has been ACCEPTED!
 *
 * 			If the candidates are rejected the program outs puts which
 * 			requirement they didn't pass or if they failed both requirements.
 *
 * 			Example:
 * 			This candidate has been rejected base on the HEIGHT requirements.
 * 			This candidate has been rejected base on the WEIGHT requirements.
 * 			or
 * 			This candidate has been rejected based on the HEIGHT and WEIGHT
 * 			requirements.
 *
 *****************************************************************************/

			cout << endl;
			if (acceptableHeight && acceptableWeight)
			{
				totalAccepted = totalAccepted + 1;

				cout << "This candidate has been ACCEPTED!\n\n\n";
			}
			else if (!acceptableHeight && acceptableWeight)
			{
				cout << "This candidate has been rejected "
						"based on the HEIGHT requirement.\n\n\n";
			}
			else if (acceptableHeight && !acceptableWeight)
			{
				cout << "This candidate has been rejected "
						"based on the WEIGHT requirement.\n\n\n";
			}
			else
			{
				cout << "This candidate has been rejected "
						" based on the HEIGHT and  WEIGHT requirements.\n\n\n";
			} // END... IF-THEN-ELSE-IF (acceptableHeight && acceptableWeight)

			// TRACKS THE TOTAL NUMBER OF CANIDATES THAT WERE ENTERED
			totalCandidates = totalCandidates + 1;

			cout << "Please enter the candidate's information "
					"(enter 'X' to exit).\n";

//cerr << "TESTING! totalAccepted: " << totalAccepted   << endl;

/*****************************************************************************
 * INPUT - Calls the function GetGender to check and store the value in the
 * 		   variable candidateGender.
 *
 *         Example:
 *         Gender: t
 *         ***** Invalid Gender; please enter M or F. *****
 *         Gender: m
 *****************************************************************************/

			candidateGender = GetGender();
		}// END.....while (candidateGender != 'x' && candidateGender != 'X')

/*****************************************************************************
 * OUTPUT - Uses an if statement to error check for a divide by 0 error using
 *          if totalCandidates > 0. If true the program then calculates
 *          percentAccepted , and then outputs the total candidates accepted
 *          and the percentage of accepted.
 *****************************************************************************/

		if (totalCandidates > 0)
		{
			percentAccepted = (totalAccepted / float(totalCandidates)) * 100;

			cout << setprecision(2);
			cout << endl;
			cout << totalAccepted << " candidates accepted!\n";
			cout << "That\'s " << percentAccepted << "%!\n\n\n";
			cout << setprecision (6);
		}// END....if (totalCandidates > 0)
	}// END....FOR LOOP (testCount)

	return 0;
}
