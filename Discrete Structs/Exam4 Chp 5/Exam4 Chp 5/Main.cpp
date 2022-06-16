/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * EXAM #        : 4 Fibonacci
 * CLASS         : Discrete Structures
 * DUE DATE      : 2/23/21
 *****************************************************************************/

#include<iostream>
#include<iomanip>
#include<chrono>
#include<string>
#include<limits>

int FibonacciMenu()
{
	const int MENU_PROMPT = 29;
	const int MENU_MIN = 0;
	const int MENU_MAX = 2;
	const int ERROR_SIZE = 37;

	int choice = 0;
	bool valid = false;

	std::cout << "Fibonacci Generator\n";

	do
	{	
		std::cout << std::left;
		std::cout << "How would you like to generate the sequence?\n"
				  << "1 - Recursive Fibonacci\n"
				  << "2 - Iterative Fibonacci\n"
				  << "0 - Exit\n";
		std::cout << std::setw(MENU_PROMPT) << "Enter an option (0 to exit):";

		if (!(std::cin >> choice))
		{
			std::cout << std::endl;
			std::cout << "**** Please input a number between 0 and 2"
				      << " ****" << std::endl << std::endl;

			//Prevents and infinite loop
			choice = -99;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			valid = false;
		}
		else if (choice < MENU_MIN || choice > MENU_MAX)
		{
			std::cout << std::endl;
			std::cout << "**** " << std::setw(ERROR_SIZE)
				      << "The Number " + std::to_string(choice) + " is an invalid entry"
				      << "**** " << std::endl;
			std::cout << "**** " << std::setw(ERROR_SIZE)
				      << "Please input a number between 0 and 2" << " ****"
				      << std::endl << std::endl;
		}
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << std::endl;
		}//END if then else if (!(std::cin >> choice))

		std::cout << std::right;
		valid = true;

	}while (!valid);

	return choice;
};
int RecursiveFibonacci(int fibonacciNumber)
{
	bool baseCase = (fibonacciNumber == 0) || 
					(fibonacciNumber == 1);

	if (baseCase)
	{
		return fibonacciNumber;
	}
	else
	{
		return RecursiveFibonacci(fibonacciNumber - 1) + RecursiveFibonacci(fibonacciNumber - 2);
	}
};
int IterativeFibonacci(int fibonacciNumber, int &numOperations)
{
	int previousPreviousNumber = 0;
	int previousNumber = 0;
	int currentNumber = 1;

	numOperations += 4; 

	for (int index = 1; index < fibonacciNumber; index++)
	{
		numOperations += 1;

		previousPreviousNumber = previousNumber;

		numOperations += 1;

		previousNumber = currentNumber;

		numOperations += 1;

		currentNumber = previousPreviousNumber + previousNumber;

		numOperations += 1;
	}// END for (int index = 1; index < fibonacciNumber; index++)

	return currentNumber;
};
void CalculateFibonacci(int fibArray[], int arraySize, int fibCheck)
{
	int iterativeOperations = 0;
	int recursiveOperations = 0;

	if (fibCheck == 1)
	{
		std::cout << "Recursive Fibonacci\n\n";

		//Start timer
		auto start = std::chrono::high_resolution_clock::now();

		//Populate the sequence array
		for (int fibIndex = 2; fibIndex < arraySize; fibIndex++)
		{
			fibArray[fibIndex] = RecursiveFibonacci(fibIndex);
			recursiveOperations += 2;
		}

		//Stop timer
		auto stop = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<::std::chrono::milliseconds>(stop - start);

		//Output the total time and operations it took to calculate the sequence
		std::cout << "Total operations: " << recursiveOperations << std::endl;
		std::cout << "Total time in milliseconds: " << duration.count();
		std::cout << std::endl << std::endl;
	}
	else if (fibCheck == 2)
	{
		std::cout << "Iterative Fibonacci\n\n";

		//Start timer
		auto start = std::chrono::high_resolution_clock::now();

		//Populate the sequence array
		for (int fibIndex = 2; fibIndex < arraySize; fibIndex++)
		{
			fibArray[fibIndex] = IterativeFibonacci(fibIndex, iterativeOperations);
		}

		//Stop timer
		auto stop = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<::std::chrono::milliseconds>(stop - start);

		//Output the total time and operations it took to calculate the seque
		std::cout << "Total operations " << iterativeOperations << std::endl;
		std::cout << "Total time in milliseconds: " << duration.count(); 
		std::cout << std::endl << std::endl;
	}
	else
	{
		std::cout << "Did not generate a sequence.\n\n";
	}
};
void OutputFibonacci(const int fibArray[], int arraySize)
{
	int fibonacciNumber = 0;
	int fibonacciAnswer = 0;

	std::cout << "Which Fibonacci number do you wish to check? ";
	std::cin  >> fibonacciNumber;

	fibonacciAnswer = fibArray[fibonacciNumber - 1];

	std::cout << "The " << fibonacciNumber << " Fibonacci number is: " 
			  << fibonacciAnswer << std::endl <<std::endl;
};

int main()
{
	const int ARRAY_SIZE = 40;

	int sequenceArray[ARRAY_SIZE] = { 0, 1 };
	int fibonacciChoice = 0;

	//Display the menu for user and get a choice
	fibonacciChoice = FibonacciMenu();

	while (fibonacciChoice != 0)
	{
		//Calculate a Fibonacci	sequence using recursion or iteration
		CalculateFibonacci(sequenceArray, ARRAY_SIZE, fibonacciChoice);
		
		//Output the array
		OutputFibonacci(sequenceArray, ARRAY_SIZE);

		//Display the menu for user and get a choice
		fibonacciChoice = FibonacciMenu();
	}

	return 0;
}