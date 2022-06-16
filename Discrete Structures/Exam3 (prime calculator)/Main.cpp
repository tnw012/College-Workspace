#include <iostream>
#include <math.h>
#include <chrono>


bool CheckIfPrime(int check);

int main()
{
	const int EXPNONENT_MAX = 8;
	int primeRange = 0;
	double base = 10.0;
	double exponent = 1.0;
	int primeCheck = 2;
	int numberOfPrimes = 0;	

	while (exponent <= EXPNONENT_MAX)
	{
		auto start = std::chrono::high_resolution_clock::now();

		primeRange = pow(base, exponent);

		for (primeCheck; primeCheck < primeRange; primeCheck++)
		{
			if (CheckIfPrime(primeCheck))
			{				
				numberOfPrimes++;
			}
		}//END for (primeCheck; primeCheck < primeRange; primeCheck++)

		std::cout << "There are " << numberOfPrimes << " prime numbers in the number "
				  << primeCheck << std::endl;

		exponent++;

		auto stop = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<::std::chrono::seconds>(stop - start);

		std::cout << "Total time was " << duration.count() << " seconds. \n\n";

	}//END 	while(exponent < 9)

	return 0;
}

bool CheckIfPrime(int check)
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