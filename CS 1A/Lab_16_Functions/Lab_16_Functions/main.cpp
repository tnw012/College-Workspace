/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Marc Stuehr
 * Student ID    : 1130500 & 1083833
 * LAB #16       : Functions - Rock, Paper, Scissors
 * CLASS         : CS1A
 * SECTION       : TTH-11am
 * DUE DATE      : 5/9/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "lab_16.h"
using namespace std;

/*****************************************************************************
 * Functions - Rock, Paper, Scissors
 * ---------------------------------------------------------------------------
 * This program will
 * ---------------------------------------------------------------------------
 * INPUT:
 *
 * OUTPUT:
 *
 *****************************************************************************/

int main ()
{
/*****************************************************************************
 * CONSTANTS
 *****************************************************************************/

	const char   LAB_TYPE     = 'L';
	const int    LAB_NUM	  = 16;
	const string LAB_NAME     = "Functions - Rock, Paper, Scissors";

/*****************************************************************************
 * VARIABLES
 *****************************************************************************/

	char compPlay;
	char userPlay;

	bool playerWon;

	int  numRounds;
	int  userWin;
	int  userLoss;

	string userSwitch;
	string compSwitch;
	string playerName;

	userLoss    = 0;
	userWin     = 0;

	srand(time(NULL));

/*****************************************************************************
 * OUTPUT - Calls the Function PrintClassHeader and outputs the class heading
 *****************************************************************************/

	PrintClassHeader (LAB_NAME, LAB_NUM, LAB_TYPE);

/*****************************************************************************
 * INPUT -
 *****************************************************************************/

	GetInput(playerName, numRounds);

/*****************************************************************************
 * PROCESSING -
 *****************************************************************************/

    for (int roundCount = 1 ; roundCount <= numRounds; roundCount++)
    {

    	userPlay = GetAndCheckPlay();
    	compPlay = GetComputerPlay();

    	playerWon = CheckWin(userPlay, compPlay);

    	switch (userPlay)
    	{
    		case 'P' : userSwitch =  "PAPER";
		 	 	   	   break;

    		case 'S' : userSwitch = "SCISSOR";
    	 	 	   	   break;

    		case 'R' : userSwitch ="ROCK";
    	}

    	switch (compPlay)
    	{
    		case 'P' : compSwitch = "PAPER";
    				   break;

    		case 'S' : compSwitch = "SCISSOR";
    			       break;

    		case 'R' : compSwitch = "ROCK";
    	}

    	cout << playerName << " chooses " << userSwitch << "!\n";
    	cout << "Computer chooses "       << compSwitch << "!\n\n";

    	if (playerWon)
    	{
    		userWin++;
    	}
    	else
		{
    		userLoss++;
		}

/*****************************************************************************
 * OUTPUT -
 *****************************************************************************/

    	OutputWin (playerName, playerWon);

    }//end for loop

	OutputMatchWinner (playerName, userWin, userLoss);

	return 0;
}
