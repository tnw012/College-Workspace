/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * EXAM #        : 1
 * CLASS         : Discrete Structures
 * DUE DATE      : 1/20/21
 *****************************************************************************/
#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
#include <cstdlib>

//User Defined Types
enum Sequences
{
	GEOMETRIC,
	FACTORIAL,
	LUCAS,
	ARITHMETIC,
};

//Prototypes
char GenerateSequence();
int GetRandomNumber(int max, int start);
void GeometricProgression(int integerArray[], int arraySize);
void FactorialSequence(int integerArray[], int arraySize);
void LucasSequence(int integerArray[], int arraySize);
void ArithmeticSequence(int integerArray[], int arraySize);
void OutputSequence(const int integerArray[], int arraySize);
void GetUserGuess(const int integerArray[], int arraySize);


int main()
{
	const int ARRAY_SIZE = 5;
	const std::string WELCOME_MESSAGE = "Number sequence generator. \n\n";

	int sequenceArray[ARRAY_SIZE];//The array that the sequence is stored in 
	int randomNumber = 0;         //Number used to generate starting points
	int userGuess = 0;            //Users answer for the fifth element
	char userChoice;              //Tracks the users choice via yes or no

	srand(time(NULL));

	std::cout << WELCOME_MESSAGE;

	//Generates a sequence based on a users choice (Y/N)
	userChoice = GenerateSequence();

	//loops until the user hit N
	while (userChoice != 'N')
	{	
		//Generates a random number between 0 and 4
		randomNumber = GetRandomNumber(4, NULL);

		switch (randomNumber)
		{
			case GEOMETRIC://This case generates a geometric progression
			{
				GeometricProgression(sequenceArray, ARRAY_SIZE);

				OutputSequence(sequenceArray, ARRAY_SIZE);

				GetUserGuess(sequenceArray, ARRAY_SIZE);

				std::cout << "This sequence is known as a geometric sequence (ar^n). \n\n";
				break;
			}
				
			case FACTORIAL://This case generates a sequence using factorials 
			{
				FactorialSequence(sequenceArray, ARRAY_SIZE);

				OutputSequence(sequenceArray, ARRAY_SIZE);

				GetUserGuess(sequenceArray, ARRAY_SIZE);

				std::cout << "This sequence is a factorial sequence using the formula (xn!). \n\n";
				break;
			}
				
			case LUCAS://This case generates a Lucas sequence
			{
				LucasSequence(sequenceArray, ARRAY_SIZE);

				OutputSequence(sequenceArray, ARRAY_SIZE);

				GetUserGuess(sequenceArray, ARRAY_SIZE);

				std::cout << "This sequence is known as a Lucas sequence (n-1 + n-2).  \n\n";
				break;
			}
	
			case ARITHMETIC://This case generates an arithmetic progression
			{
				ArithmeticSequence(sequenceArray, ARRAY_SIZE);

				OutputSequence(sequenceArray, ARRAY_SIZE);

				GetUserGuess(sequenceArray, ARRAY_SIZE);

				std::cout << "This sequence is known as a arithmetic sequence (dx+a). \n\n";
				break;
			}				
		}//END switch(randomNumber)	

		//Generates a sequence based on a users choice (Y/N)
		userChoice = GenerateSequence();

	}//END while(userChoice != 'Y')

	return 0;
}

/*****************************************************************************
 * FUNCTION DEFINTIONS
*****************************************************************************/

/****************************************************************************
* Generates a random number based on the parameters of the function* 
*****************************************************************************/
int GetRandomNumber(int max, int start)
{
	int randomNum = 0;	
	
	//Generates a random number 
	if (start == 0)
	{
		randomNum = rand() % max;
	}
	else
	{
		randomNum = rand() % max + start;
	}
//std::cerr << "(" << randomNum << ")" << std::endl << std::endl;

	return randomNum;
}

/****************************************************************************
* This function generates a sequence of integer based on a geometric 
* progression using the formula f(x) = ar^n 
* a = initialTerm
* r = commonDifference
* n = index
*****************************************************************************/
void GeometricProgression(int integerArray[], int arraySize)
{
	int initialTerm     = 0;//The first term in the sequence
	int commonDiffernce = 0;
	int arrayIndex;

	//Generates a random initial term between 1 and 10
	initialTerm = GetRandomNumber(10, 1); 

	//Assigns the first term to the sequence
	integerArray[0] = initialTerm;

	//Assigns a common Differnce
	commonDiffernce = initialTerm + 1;

	//Generates a number sequence using a geometric progression
	for (arrayIndex = 1; arrayIndex < arraySize; arrayIndex++)
	{
		integerArray[arrayIndex] = initialTerm * pow(commonDiffernce, arrayIndex);
	}//END for(arrayIndex = 0; arrayIndex < arraySize; arrayIndex++)
}

/****************************************************************************
* This function generates a sequence of integers using the formula f(x) = xn!
* x = factor
* n = factorialOfIndex
*****************************************************************************/
void FactorialSequence(int integerArray[], int arraySize)
{
	int arrayIndex;       //Tracks the index of the array
	int factor;           //The number that the factorial is multiplied by
	int factorialOfIndex; //Factorial of the index

	factor = 0;

	//Generates a number between 1 and 5;
	factor = GetRandomNumber(5,1);
//std::cerr << factor << std::endl;

	//Generates the sequence with the formula 2n!
	for(arrayIndex = 0; arrayIndex < arraySize; arrayIndex++)
	{
		factorialOfIndex = 1;

		//Calculates the factorial of the starting number
		for (int startingFactor = 1; startingFactor <= arrayIndex; startingFactor++)
		{
			factorialOfIndex *= startingFactor;
		}		
//std::cerr << factorialOfIndex << std::endl;

		integerArray[arrayIndex] = factor * (factorialOfIndex);
	}//END for(arrayIndex = 0; arrayIndex < arraySize; arrayIndex++)
}

/****************************************************************************
* This function generates a sequence of integers using the Lucas sequence.
* This sequence use the formula f(x) = n-1 + n-2
* n = arrayIndex
*****************************************************************************/
void LucasSequence(int integerArray[], int arraySize)
{
	int arrayIndex;     //Tracks the index of the array
	int firstTerm  = 0; //Assigns the first term of the sequence
	int secondTerm = 0; //Assigns the second term of the sequence

	//Generates two random starting terms
	firstTerm  = GetRandomNumber(10, 1);
	secondTerm = GetRandomNumber(10, 1);

	//Assigns the two terms to the sequence
	integerArray[0] = firstTerm;
	integerArray[1] = secondTerm;

	//Generates the sequence using the Lucas sequence formula.
	for(arrayIndex = 2; arrayIndex < arraySize; arrayIndex++)
	{
		integerArray[arrayIndex] = (integerArray[arrayIndex - 1]) + (integerArray[arrayIndex - 2]);
	}//END for(arrayIndex = 2; arrayIndex < arraySize; arrayIndex++)
}

/****************************************************************************
* This function generates a sequence of integers using the arithmetic 
* sequence. This sequence uses the formula f(x) = dn + a
* a = initialTerm
* d = commonDifference
* n = arrayIndex
*****************************************************************************/
void ArithmeticSequence(int integerArray[], int arraySize)
{
	int arrayIndex;          //Tracks the index of the array 
	int commonDifference = 0;//The common difference of the terms
	int initialTerm = 0;     //The first term in the sequence

	//Generates a random starting term.
	initialTerm = GetRandomNumber(6, 1);

	//Assigns a common difference
	commonDifference = initialTerm * 2;

	//Gives the first the term the value of initialTerm
	integerArray[0] = initialTerm;

	//Generates a number sequence using the arithmetic sequence
	for(arrayIndex = 1; arrayIndex < arraySize; arrayIndex++)
	{
		integerArray[arrayIndex] = commonDifference * arrayIndex + initialTerm;
	}//END for(arrayIndex = 0; arrayIndex < arraySize; arrayIndex++)
}

/****************************************************************************
* Gets the user answer for the fifth element in the sequence and the checks
* whether the user was correct or not.
*****************************************************************************/
void GetUserGuess(const int integerArray[], int arraySize)
{
	const std::string CORRECT_ANSWER = "Correct! The next number in the sequence is ";
	const std::string WRONG_ANSWER = "Sorry that is not the correct number ";
	const std::string RIGHT_ANSWER = "The correct answer is ";

	int userGuess = 0;     //INPUT  - Tracks the users guess

	//Asks the user for the fifth term in the sequence.
	std::cout << "What is the fifth term in this sequence? ";
	std::cin  >> userGuess;
	std::cin.ignore(10000, '\n');

	//Chooses whether the user was right or wrong.
	if (userGuess == integerArray[4])
	{
		std::cout << CORRECT_ANSWER << userGuess << std::endl;
	}
	else
	{
		std::cout << WRONG_ANSWER << std::endl;
		std::cout << RIGHT_ANSWER << integerArray[4] << std::endl;
	}//END if else (userGuess == integerArray[4])
}

/****************************************************************************
* This Function outputs the sequence to the console so the user can see it.
*****************************************************************************/
void OutputSequence(const int integerArray[], int arraySize) 
{
	int arrayIndex;//Tracks the index of the array

	//Loops through the array outputing the first four terms of a sequence.
	for (arrayIndex = 0; arrayIndex < arraySize - 1; arrayIndex++)
	{
		if (arrayIndex == 0)
		{
			std::cout << "{" << integerArray[arrayIndex];
		}
		else
		{
			std::cout << ", " << integerArray[arrayIndex];
		}
	}

	std::cout << "...}" << std::endl;
}

/****************************************************************************
* This function asks the user if they want to generate a sequence
*****************************************************************************/
char GenerateSequence()
{
	char userSelection;//Tracks the users choice

	//Inputs the users choice
	std::cout << "Generate a sequence? (Y/N) ";
	std::cin.get(userSelection);
	std::cin.ignore(10000, '\n');

	std::cout << std::endl;

	userSelection = toupper(userSelection);
//std::cerr << "(" << userChoice << ")";

	return userSelection;
}

