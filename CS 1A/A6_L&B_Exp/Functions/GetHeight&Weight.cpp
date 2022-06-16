#include <iostream>
using namespace std;

/*****************************************************************************
 * Function - GetHeightAndWeight
 * ---------------------------------------------------------------------------
 * This function will prompt for a height and weight.  It will check
 * and validate each input base on the ranges provided by the constants.
 * ---------------------------------------------------------------------------
 * INPUT:
 * 		height - Passes by reference the height back to main
 * 		weight - Passes By reference the weight back to main
 *
 * RETURNS:
 *****************************************************************************/

void GetHeightAndWeight(int &height, int &weight)
{
/*****************************************************************************
 * CONSTANTS
 *****************************************************************************/

	const int INV_HEIGHT_MIN = 24;
	const int INV_HEIGHT_MAX = 110;
	const int INV_WEIGHT_MIN = 50;
	const int INV_WEIGHT_MAX = 1400;

/*****************************************************************************
 * VARIABLES
 *****************************************************************************/

	bool invalidHeight;
	bool invalidWeight;

	// Checks and Validates the Height
	do
	{

		cout << "Height: ";
		cin  >> height;
		cin.ignore(1000 , '\n');

		invalidHeight = height < INV_HEIGHT_MIN ||
						height > INV_HEIGHT_MAX;

		if(invalidHeight)
		{
			cout << "***** Invalid Height; please enter a height in inches "
				 <<	"between " << INV_HEIGHT_MIN <<" and " << INV_HEIGHT_MAX
				 <<	". *****\n";
		}
	}while(invalidHeight);

	// Checks and validates the Weight
	do
	{

		cout << "Weight: ";
		cin  >> weight;
		cin.ignore(1000 , '\n');

		invalidWeight = weight < INV_WEIGHT_MIN ||
						weight > INV_WEIGHT_MAX;

		if(invalidWeight)
		{
			cout << "***** Invalid Weight; please enter weight a in lbs "
				 << "between " << INV_WEIGHT_MIN << " and " << INV_WEIGHT_MAX
				 << ". *****\n";
		}
	}while(invalidWeight);
}
