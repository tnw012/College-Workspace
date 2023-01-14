/******************************************************************************
 * AUTHORS     : Elijah De Vera & Tevin Wolfe
 * STUDENT IDs : 1100321 & 1130500
 * LAB # 13    : Reptition - Buddy's Average Sheep Age Calculator
 * CLASS       : CS1A
 * SECTION     : TTh: 11am
 * DUE DATE    : 4/16/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/******************************************************************************
 * Repetition - Buddy's Average Sheep Age Calculator
 * ----------------------------------------------------------------------------
 * This program will calculate the average age of all the sheep and indicate
 * whether the sheep are young, middle-aged, or aging.
 * ----------------------------------------------------------------------------
 * INPUT:
 *    sheepAge    : The age of the sheep.
 *
 * OUTPUT:
 *    avgAge      : The average age of the sheep entered.
 *    aging       : If the average age of sheep is greater than 6.
 *    middle-aged : If the average age is in between the ages 4 and 6.
 *    young       : If the average age is less than or equal to 3.
 *
 *****************************************************************************/

int main()
{
/*************************************************************************
  * CONSTANTS
  * -----------------------------------------------------------------------
  * OUTPUT - USED FOR CLASS HEADING
  * -----------------------------------------------------------------------
  * PROGRAMMER : Programmer's Name
  * CLASS      : Student's Course
  * SECTION    : Class Days and Times
  * LAB_NUM    : Lab Number (specific to this lab)
  * LAB_NAME   : Title of the Lab
  * -----------------------------------------------------------------------
  * FORMATTING - USED FOR FORMATTING
  * -----------------------------------------------------------------------
  * AGE_LIMIT     : Age limit is the condition limit for the while loop.
  * INCREMENT     : Increment is used for the calculating sheep count.
  * COUNT_LIMIT   : Count limit is the error check for average age.
  * END_LOOP      : End loop is used for the end case for the for loop.
  ************************************************************************/

	const char PROGRAMMERS []      = "Elijah De Vera & Trevin Wolfe";
	const char CLASS []            = "CS1A";
	const char SECTION []          = "TTH: 11am";
	const int  LAB_NUM             = 13;
	const char LAB_NAME []         = "Repetition - Buddy's Average Sheep Age Calculator";

	const int  AGE_LIMIT   = -1;
	const int  INCREMENT   = 1;
	const int  COUNT_LIMIT = 0;

	char  age[12];    // CALC & OUT  - stores c-string values
	double avgAge;    // IN & CALC   - stores the average age of the sheep
	int   sheepAge;   // IN & OUT    - stores the age of the sheep
	int   sheepCount; // IN & CALC   - accumulates the total sheep
	int   totalAge;   // IN & CALC   - total age of the sheep

	sheepCount = 0;
	totalAge   = 0;
	avgAge     = 0.0;


   /***************************************************************************
   * OUTPUT - Class Heading
   ***************************************************************************/

   cout << left;
   cout << "**************************************************\n";
   cout << "* PROGRAMMED BY : " << PROGRAMMERS                    << endl;
   cout << "* "     << setw(14) << "CLASS"    << ": " << CLASS    << endl;
   cout << "* "     << setw(14) << "SECTION"  << ": " << SECTION  << endl;
   cout << "* LAB " << setw(10) << LAB_NUM    << ": " << LAB_NAME << endl;
   cout << "**************************************************\n\n";
   cout << right;

   /***************************************************************************
   * INPUT - Read in the age of the sheep and output an error if it's the wrong
   * age.
   ***************************************************************************/

   cout << "Welcome to Buddy\'s Average Sheep Age Calclator! \n\n";

   do  // do while
   {
	   cout << "\tEnter in the sheep ages, input -1 to exit \n";
	   cout << "\tSheep Age: ";
   	   cin  >> sheepAge;
   	   cin.ignore (1000 ,'\n');

   	   if (sheepAge >= 10)
   	   {
   		   cout << endl;
   		   cout << "\tInvalid sheep age - ";
   		   cout << "please input a value less than or equal to 9!\n\n";
   	   }

   }while (sheepAge >= 10);

   /***************************************************************************
    * PROCESSING - Calculates the total age of all the sheep entered,
    *              keeps track of the total sheep, and then uses a
    *              selection statement for the average age.
    **************************************************************************/

   while (sheepAge > AGE_LIMIT)
   {
	   totalAge   = totalAge + sheepAge;
	   sheepCount = sheepCount + INCREMENT;

   do //Do While
   {
	   cout << "\tSheep Age: ";
	   cin  >> sheepAge;
	   cin.ignore (1000 , '\n');

	   if (sheepAge >=10)
	   {
		   cout << endl;
		   cout << "\tInvalid sheep age - ";
		   cout <<"please input a value less than or equal to 9!\n\n";
	   }
   }while (sheepAge >=10);
   }// while (sheepAge > AGE_LIMIT)

   if (sheepCount > COUNT_LIMIT)
   {
	   avgAge = double(totalAge) / sheepCount;

	   if (avgAge > 6)
	   {
		   strncpy(age, "AGING", 12);
	   }
	   else
	   {
		   if (avgAge <= 3)
		   {
		   strncpy(age, "YOUNG", 12);
		   }
		   else
		   {
			   strncpy(age, "MIDDLE-AGED", 12);
		   } // if (avgAge <= 3)
	   } // if (avgAge > 6)

  /***************************************************************************
   * OUTPUT - Outputs the average age and the c-string associated to age
   * Example -
   *   On average your sheep are 8.0 years old!
   *   In general, your sheep are AGING!
   ***************************************************************************/

	   cout << setprecision(2) << showpoint;
	   cout << endl;
	   cout << "\tOn average your sheep are " << avgAge << " years old!\n";
	   cout << "\tIn general, your sheep are " << age << "!\n\n";
	   cout << noshowpoint;
   }
   else
   {
	   cout << endl;
	   cout << "\tExiting!\n\n";
   } // if (sheepCount > COUNT_LIMIT

   	   cout << endl << endl;
   	   cout << "Thank you for using Buddy\'s Average Sheep Age Calculator!\n";
   	   cout << "Have a great day!! :)\n";

    return 0;

}
