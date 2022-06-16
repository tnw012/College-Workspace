#include <iostream>
#include <string>
using namespace std;

void OutputWin (string name, bool roundResults)
{
	if (roundResults)
	{
		cout << name << " WINS!!\n\n";
	}
	else
	{
		cout << "Computer wins, better luck next time, " << name
			 << endl << endl;
	}


}
