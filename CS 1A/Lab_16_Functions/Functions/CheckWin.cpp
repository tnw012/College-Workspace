#include <iostream>
using namespace std;

bool CheckWin(char userInput, char compInput)
{
	bool playerWins;

	playerWins = ((userInput == 'R' && compInput == 'S') ||
				 (userInput == 'P' && compInput == 'R') ||
				 (userInput == 'S' && compInput == 'P'));

	return playerWins;
}
