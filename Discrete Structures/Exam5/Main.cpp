#include<iostream>

struct DonutType
{
	char glazed  = 'g';
	char jelly   = 'j';
	char frosted = 'f';
	char divider = '/';
};

long double CalculateFactorial(long double integer)
{
	if (integer == 0)
	{
		return 1;
	}
	else
	{
		return CalculateFactorial(integer - 1 ) * integer;
	}
}
long long int CalculateCombinations(long type, long choose)
{
	long int n = type;
	long int r = choose;	

	return 0;
}
void OutputCombinations(char combonationArray[], int arraySize, int combonations)
{
	for (int index = 0; index < combonations; index++)
	{
		
	}
}


int main() 
{
	const int ARRAY_SIZE = 6;
	
	char DonutCombonationArray[ARRAY_SIZE];
	long double x = 0.0;

	x = CalculateFactorial(365.0);

	std::cout << x << std::endl;

	return 0;
}