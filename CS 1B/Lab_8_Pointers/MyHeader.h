
#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>
#include <iomanip>
#include <sstream>
#include <ios>
#include <limits>


using namespace std;

/*****************************************************************************
* PrintHeaderUsingOSS
*	This function outputs the class header.
*
* RETURNS: nothing
*	-> Displays the class header
* ****************************************************************************/
string PrintHeaderUsingOSS (string     asName, // IN - assignment Name
				            char       asType, // IN - assignment type
				            int         asNum);// IN - assignment number
#endif /* MYHEADER_H_ */
