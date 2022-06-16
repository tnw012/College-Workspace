#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void GetInput(string &name, int &rounds)
{

	cout << "Enter Player's Name: ";
	getline(cin, name);

	cout << "Enter Number of Rounds in Match: ";
	cin  >> rounds;
	cin.ignore(1000,'\n');

	cout << endl;

}
