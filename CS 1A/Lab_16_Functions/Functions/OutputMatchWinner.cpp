#include <iostream>
#include <string>
using namespace std;

void OutputMatchWinner (string name, int roundsWon, int roundsLost)
{
	int percentWins;
	int percentLoss;
	int totalRounds;

	totalRounds = 0;

	totalRounds = roundsWon + roundsLost;

	string winMsg = " is the WINNER, WINNER, CHICKEN DINNER!!\n";

	cout << "***********************************\n"
		 << "*********  FINAL RESULTS  *********\n"
		 << "***********************************\n\n";

		if (roundsWon > roundsLost)
		{
			cout << name << winMsg;

			percentWins = (roundsWon / float(totalRounds)) * 100;

			cout << name << " won " << percentWins << "% of the time!";
		}
		else
		{
			cout << "Computer " << winMsg;

			percentLoss = (roundsLost / float(totalRounds)) * 100;

			cout << name << " lost " << percentLoss << "% of the time!";
		}

cerr << "TESTING! " << totalRounds << "=" << roundsWon << "+" << roundsLost << endl;
}
