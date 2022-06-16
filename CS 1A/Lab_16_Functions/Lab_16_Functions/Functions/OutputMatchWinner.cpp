#include <iostream>
#include <iomanip>
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

			cout << setprecision(3) << fixed;
			cout << name << " won " << percentWins << "% of the time!";
			cout << setprecision(6);
		}
		else
		{
			cout << "Computer " << winMsg;

			percentLoss = (roundsLost / float(totalRounds)) * 100;

			cout << setprecision(3) << fixed;
			cout << name << " lost " << percentLoss << "% of the time!";
			cout << setprecision(6);
		}

cerr << "TESTING! " << totalRounds << "=" << roundsWon << "+" << roundsLost << endl;
}
