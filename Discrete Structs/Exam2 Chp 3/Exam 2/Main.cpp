/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * EXAM #        : 2 CASHIERS ALGORITHM
 * CLASS         : Discrete Structures
 * DUE DATE      : 1/27/21
 *****************************************************************************/
#include<iostream>
#include<iomanip>
#include<time.h>
#include<cstdlib>

//User Defined Types

//Prototypes

double RandomDecimalGenerator(double maxValue);
double RandomTotalGenerator();
double RandomPaymentGenerator(double totalPrice);
void MakeChange(int changeArray[], int arraySize, double change);
void PrintDenominations(const std::string denomArray[], const int changeArray[], int arraySize);

int main()
{
	const int MAX_DECIMAL = 2;
	const int ARRAY_SIZE = 8;

	int totalChangeArray[ARRAY_SIZE];
	std::string ChangeNamesArray[] = { "Twenties", "Tens","Fives","Ones",
									   "Quarters", "Dimes", "Nickels", "Pennies" };
	double totalPayment   = 0.0;// Tracks the total payment of the transaction
	double totalCost      = 0.0;// tracks the total cost of the transaction
	double totalChange    = 0.0;// Tracks the total change to give back


	srand(time(NULL));
	
	//for (	int index = 0; index < 10; index++)
	//{
		totalCost = RandomTotalGenerator();

		std::cout << std::setprecision(MAX_DECIMAL) << std::fixed;
		std::cout << "Did you find everything ok? \n";
		std::cout << "Your total today is " << totalCost << std::endl << std::endl;

		//Calculate the total payment and the change returned
		totalPayment = RandomPaymentGenerator(totalCost);
		totalChange = totalPayment - totalCost;

		std::cout << "Received payment of " << totalPayment << std::endl;
		std::cout << "Your change back is " << totalChange << std::endl << std::endl;
		std::cout.unsetf(std::ios::fixed);
		

		//Get the denominations of the change given back
		MakeChange(totalChangeArray, ARRAY_SIZE, totalChange);

		PrintDenominations(ChangeNamesArray, totalChangeArray, ARRAY_SIZE);

		std::cout << std::endl;
	//}//END for (	int index = 0; index < 10; index++)	
	
	return 0;
}
/*****************************************************************************
 * FUNCTION DEFINTIONS
*****************************************************************************/

/****************************************************************************
* This function generates a random decimal
*****************************************************************************/
double RandomDecimalGenerator(double maxValue)
{
	double randomDecimal = 0.0;

	randomDecimal = ((double)rand()) / ((double)RAND_MAX) * maxValue;

	return randomDecimal;
}

/****************************************************************************
* This function generates a random total for the transaction
*****************************************************************************/
double RandomTotalGenerator()
{
	const double MAX_TOTAL = 50.99;

	double randomTotal = 0.0;

	randomTotal = RandomDecimalGenerator(MAX_TOTAL);

	return randomTotal;
}

/****************************************************************************
* This function generates a random payment to be used
*****************************************************************************/
double RandomPaymentGenerator(double totalPrice)
{
	const double MAX_PAYMENT = 99.99;

	double randomPayment = 0.0;

	while (randomPayment < totalPrice)
	{
		randomPayment = RandomDecimalGenerator(MAX_PAYMENT);
	}

	return randomPayment;
}

/****************************************************************************
* This function calculates the denominations of change to be returned to the
* user using the cashiers algorithm
*****************************************************************************/
void MakeChange(int changeArray[], int arraySize, double change)
{
	double denominationsArray[] = {20.0, 10.0, 5.0, 1.0, 0.25, 0.10, 0.05, 0.01};	

	for (int index = 0; index < arraySize; index++)
	{
		int changeCount = 0;

		while (change >= denominationsArray[index])
		{
			change -= denominationsArray[index];

			changeCount += 1;
		}

		changeArray[index] = changeCount;
	}
}

/****************************************************************************
* This function uses two parallel arrays to print the denominations to the
* console.
*****************************************************************************/
void PrintDenominations(const std::string denomArray[], const int changeArray[], int arraySize)
{
	const int MAX_WIDTH = 9;

	std::cout << "Cash Back\n";

	for(int index = 0; index < arraySize; index++)
	{
		if (changeArray[index] != 0)
		{
			std::cout << std::left;
			std::cout << std::setw(MAX_WIDTH) << denomArray[index] << ": "
				<< changeArray[index]
				<< std::endl;
			std::cout << std::right;
		}
		
	}// END for(index; index < arraySize; index++)
}

