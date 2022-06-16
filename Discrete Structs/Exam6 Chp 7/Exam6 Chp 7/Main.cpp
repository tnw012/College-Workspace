#include <iostream>
#include <math.h>

double CalculateProbability(double event, double sampleSpace)
{
	double probability = 0.0;

	probability = event / sampleSpace;

	return probability;
};

double CalculateSharedProbability(double events, double sampleSpace, int objects)
{
	double sharedProbability = 0.0;
	double totalProbability = 0.0;	

	for (int index = 2; index <= objects; index++)
	{
		if (index == 2)
		{
			totalProbability = 1 * CalculateProbability(events - double(index), sampleSpace);
		}
		else
		{
			totalProbability = totalProbability * CalculateProbability(events - double(index), sampleSpace);
		}

		//std::cout << totalProbability << std::endl;
	}

	//std::cout << std::endl;

	sharedProbability = 1.0 - totalProbability;

	//std::cout << sharedProbability << std::endl;

	return sharedProbability;
};

int main()
{
	bool leapYears = false;
	char choice;
	double birthdayEvent = 0.0;
	double findProbability = 0.0;
	double totaProbability = 0.0;
	double totalBirthdays = 0.0;
	int numOfPeople = 2;

	std::cout << "Calculate? (Y/N): ";
	std::cin.get(choice);
	std::cin.ignore(10000, '\n');

	choice = toupper(choice);

	while (choice != 'N')
	{
		totaProbability = 0.0;
		numOfPeople = 2;

		//get the percentage to search for and sets the sample size.
		std::cout << "Enter the percentage you wish to find: ";
		std::cin  >> findProbability;

		std::cout << "Are there leap years include? (1(Y) / 0(N)): ";
		std::cin  >> leapYears;
		std::cin.ignore(10000, '\n');
		std::cout << std::endl;

		//Converts the percentage from to decimal.
		findProbability = findProbability / 100;

		//sets the total birthday or sample size.
		if (leapYears == true)
		{
			totalBirthdays = 366.0;

			birthdayEvent = totalBirthdays + 1;
		}
		else
		{
			totalBirthdays = 365.0;

			birthdayEvent = totalBirthdays + 1;
		}

		totaProbability = CalculateSharedProbability(birthdayEvent, totalBirthdays, numOfPeople);

		//Calculates the probability that at least 2 people share a birthday with n people at party.

		while (totaProbability <= findProbability)
		{
			numOfPeople++;

			totaProbability = CalculateSharedProbability(birthdayEvent, totalBirthdays, numOfPeople);
		}		

		//Converts the percentage from decimal to integer.
		findProbability = findProbability * 100;

		std::cerr << "(" << totaProbability << ")\n";

		std::cout << "For the probability of at least 2 people sharing a birthday to be "
			<< findProbability << "%. There needs to be at minimum of " << numOfPeople
			<< " people.\n\n";

		std::cout << "Calculate? (Y/N): ";
		std::cin.get(choice);
		std::cin.ignore(10000, '\n');

		choice = toupper(choice);
	} 

	return 0;
}