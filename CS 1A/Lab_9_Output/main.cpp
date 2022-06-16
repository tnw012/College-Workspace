/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Basel Sweiden
 * Student ID    : 1130500 & 1077676
 * LAB #9        : Output - Geometry
 * CLASS         : CS1A
 * SECTION       : TTH-11am
 * DUE DATE      : 3/14/19
 *****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*****************************************************************************
 * Output - Geometry
 * ---------------------------------------------------------------------------
 * This program will CALC & Output the area of a triangle, rectangle, and
 * circle.
 * ---------------------------------------------------------------------------
 * INPUT:
 *		tHeight   - the first value entered by user and multiplied.
 *		tBase     - the second value entered and multiplied.
 *		rWidth    - first rectangle value entered and multiplied.
 *		rHeight   - second rectangle value entered and multiplied.
 *		radius    - the only value entered for the circle and multiplied by PI
 *
 * OUTPUT:
 *		triArea   - Area of two values tHeight * base divided by 2
 *		recArea   - Area of two values rWidth * rHeight
 *		circArea  - Area of one value and the constant PI * radius^2 *
 *****************************************************************************/

int main ()
{
	/*************************************************************************
	 * CONSTANT
	 * -----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMERS :Trevin Wolfe & Basil Sweiden
	 * CLASS       : CS1A
	 * SECTION     : TTH-11am
	 * LAB_NUM     : Lab #9
	 * LAB_NAME    : Output - Geometry
	 *************************************************************************/

	const char PROGRAMMER[31] = "Trevin Wolfe & Basil Sweiden";
	const char CLASS[5]	      = "CS1A";
	const char SECTION[8]	  = "TTH-11A";
	const char LAB_NUM[6]	  = "9";
	const char LAB_NAME[21]   = "Output - Geometry";
	const double PI           = 3.14159;

	double tHeight;		// INPUT & CALC - First triangle value
	double base;		// INPUT & CALC - Second triangle value
	double rWidth;      // INPUT & CALC - First rectangle value
	double rHeight;     // INPUT & CALC - Second rectangle value
	double radius;      // INPUT & CALC - The only value for the circle
	double triArea;     // CALC & OUT   - First output value from left to right
	double recArea;     // CALC & OUT   - Second output value from left to right
	double circArea;    // CALC & OUT   - Last output value from left to right


	/*************************************************************************
	 * OUTPUT - CLASS HEADING
	 *************************************************************************/
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  "	    << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "	    << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  LAB #"	<< setw(9)  << LAB_NUM    << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;


	/*************************************************************************
	 * INPUT - Reads in the inputs from the user.
	 *************************************************************************/
	cout << "Enter the height of the triangle: ";
	cin  >> tHeight;

	cout << "Enter the base of the triangle: ";
	cin  >> base;
	cout << endl;

	cout << "Enter the width of the rectangle: ";
	cin  >> rWidth;

	cout << "Enter the height of the rectangle: ";
	cin  >> rHeight;
	cout << endl;

	cout << "Enter the radius of the circle: ";
	cin  >> radius;
	cout << endl << endl;

	/*************************************************************************
	 * PROCESSING - CALC the area of each shape
	 *************************************************************************/

	triArea  = (tHeight * base) / 2;
	recArea  = rWidth * rHeight;
	circArea = PI * (radius * radius);

    /*************************************************************************
     * OUTPUT - The program will output the area of a triangle, rectangle,
     *          and circle in three different columns from left to right.
     *************************************************************************/

	cout << setw(17) << "Triangle Area" << setw(18) << "Rectangle Area"
		 << setw(15) << "Circle Area"   << endl;

	cout << setw(17) << triArea << setw(18) << recArea << setw(15)
		 << circArea << endl;

	cout << setprecision(3);
	cout << setw(17) << triArea << setw(18) << recArea << setw(15)
		 << circArea << endl;

	cout << setprecision(3) << showpoint;
	cout << setw(17) << triArea << setw(18) << recArea << setw(15)
		 << circArea << endl;
	cout << noshowpoint;

	cout << fixed;
	cout << setw(17) << triArea << setw(18) << recArea << setw(15)
		 << circArea << endl;
	cout.unsetf(ios::fixed);

	cout << setprecision(5) << fixed;
	cout << setw(17) << triArea << setw(18) << recArea << setw(15)
	     << circArea << endl;
	cout.unsetf(ios::fixed);

	cout << setprecision(6);
	cout << setw(17) << triArea << setw(18) << recArea << setw(15)
		 << circArea << endl;


	return 0;

}
