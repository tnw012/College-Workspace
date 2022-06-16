#ifndef LAB_16_H_
#define LAB_16_H_


//Pre-Processing Directives
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "lab_16.h"
using namespace std;

//Global Constants
//User Defined Types go here

// Prototypes
void PrintClassHeader (string asName, int asNum, char asType);

void GetInput(string &name, int &rounds);

char GetAndCheckPlay();

char GetComputerPlay();

bool CheckWin(char userInput, char compInput);

void OutputWin(string name, bool results);

void OutputMatchWinner(string name, int roundsWon, int roundsLost);




#endif /* LAB_16_H_ */
