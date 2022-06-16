//HEADER NAME
#ifndef header_h_
#define header_h_

//Pre Processor directives
#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;

//Global Constants
//User defined types

//Prototypes
bool  GetCoinFlip();
float GetAvgFlip(int flips, int heads);
void  GetUserInfo(string &name, char &gender);
void  OutputResult(int totFlips, float avg);
void  PrintClassHeader(string asName,
int 	asNum,
char	asType = 'L');



#endif // !header_h_
