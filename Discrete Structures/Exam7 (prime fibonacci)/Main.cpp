#include <iostream>


long long int RecursiveFibonacci(long long int fibonacciNumber)
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
}

bool CheckIfPrime(long long int check)
{
	bool isPrime = true;

	for (int factor = 2; factor < check; factor++)
	{
		if (check % factor == 0)
		{
			return false;
		}
	}

	return isPrime;
}

int main()
{
	const int FIB_SIZE = 50;
	const int ARRAY_SIZE = 15;

	int fibPrimes = 0;
	long long int fibNumber = 0;
	long long int fibPrimeArray[ARRAY_SIZE];

	for (int index = 0; index < FIB_SIZE; index++)
	{
		fibNumber = RecursiveFibonacci(index);

		std::cerr << index << ". " << fibNumber << std::endl;

		if (!(fibNumber == 0 || fibNumber == 1))
		{
			if (CheckIfPrime(fibNumber))
			{
				fibPrimes++;

				fibPrimeArray[index] = fibNumber;

				//std::cout << fibPrimeArray[index] << std::endl;
			}
		}
	}//END for (int index = 3; index < ARRAY_SIZE; index++)

	std::cout << "There are " << fibPrimes << " prime Fibonacci Numbers."  << std::endl;

	return 0;
}

