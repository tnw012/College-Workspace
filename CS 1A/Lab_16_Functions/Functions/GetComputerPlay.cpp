#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

char GetComputerPlay()
{
	char compChoice;
	int compValue;

	compValue = rand() %3 +1;


	if (compValue == 1)
	{
		compChoice = 'R';
	}
	if (compValue == 2)
	{
		compChoice = 'P';
	}
	if (compValue == 3)
	{
		compChoice = 'S';
	}



	return compChoice;
}
