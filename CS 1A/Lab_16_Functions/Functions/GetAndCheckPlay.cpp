#include <iostream>
using namespace std;

char GetAndCheckPlay()
{
	char playChoice;
	bool invalidChoice;

	cout << "**********************\n"
		 << "** CHOOSE YOUR PLAY **\n"
		 << "**********************\n";

	do
	{
		cout << "R - Rock\n"
			 << "P - Paper\n"
			 << "S - Scissors\n";


		cout << "Enter your play: ";
		cin.get(playChoice);
		cin.ignore (1000, '\n');
		cout << endl;

		playChoice = toupper(playChoice);

		invalidChoice = playChoice != 'R' &&
				 	 	playChoice != 'P' &&
						playChoice != 'S';

		if (invalidChoice)
		{
			cout << "** INVALID INPUT - Please Enter (R, P, or S) **\n\n";
		}
	}while(invalidChoice);

	return playChoice;
}
