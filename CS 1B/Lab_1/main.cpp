/*****************************************************************************
* AUTHORS    : Trevin Wolfe & Sam Liimatainen
* Student ID : 1130500 & 276308
* LAB #1     : CS1A - Theme Park Day Planner
* CLASS      : CS1B
* SECTION    : MW 7:30pm
* DUE DATE   : 8/22/19
******************************************************************************/
 #include <iostream>
 #include <iomanip>
 #include <string>

 using namespace std;

/******************************************************************************
 * Program Name - Theme Park Day Planner
 * ---------------------------------------------------------------------------
 * This program will take information about 10 kids attending a theme park.
 * Based on the input from the user the program will then output which meal and
 * ride each child should ride based on their age and dietary choices.
 * ---------------------------------------------------------------------------
 * INPUT:
 *		name        : Stores the name of each child.
 * 		age 	    : Stores the age of each child.
 * 		veganChoice : Stores whether a child is a vegetarian or not.
 * 		cheeseChoice:Stores whether a child likes cheese or not.
 *
 * OUTPUT:
 * 		totalCost   : Outputs the total cost of all the kids to enter the park
 * 		avgCost 	: Outputs the average cost of each kid (under 5 is free).
******************************************************************************/

int main()
{
/******************************************************************************
 * CONSTANTS
 * ----------------------------------------------------------------------------
 * OUTPUT - USED FOR CLASS HEADING
 * ----------------------------------------------------------------------------
 * PROGRAMMERS :Trevin Wolfe & Sam liimatainen
 * CLASS 	   : CS1B
 * SECTION     : TTH-11am
 * LAB_NUM     : Lab #
 * LAB_NAME    : CS1A Review - Theme Park Day Planner
******************************************************************************/

	const string PROGRAMMER = "Trevin Wolfe & Sam Liimatainen";
	const string CLASS      = "CS1B";
	const string SECTION    = "MW-7:30p";
	const int    LAB_NUM   	= 1;
	const string LAB_NAME   = "CS1A - Theme Park Day Planner";

	const float CB_PRICE = 3.50;//Sets the price for the cheese burger item.
	const float HB_PRICE = 3.25;//Sets the price for the hamburger item.
	const float CP_PRICE = 2.50;//Sets the price for the cheese pizza item.
	const float HG_PRICE = 1.75;//Sets the price for the hanging gardens item.
	const int PT_ADMIN   = 15;	//The admissions cost for kids older than 5
	const int TE_ADMIN   = 20;  //Admissions cost for kids older than 12
	const int CLM_WIDTH  = 32;  //Sets the width of the the columns
	const int MNY_WIDTH  = 6;   //Sets the width for the output prices

/******************************************************************************
 * VARIABLES
 *****************************************************************************/

	char   veganChoice;    // IN & CALC  - Stores kids vegetarian choice
	char   cheeseChoice;   // IN & CALC  - Stores kids cheese choice.
	double foodCost;       // CALC & CALC- Stores the total price of the food.
	double totalCost;      // IN & OUT   - Total cost of food and kid admission.
	double avgCost;        // CALC & OUT - Average cost per kid.
	double adminCost;      // CALC & CALC- Admission cost per kid based on age.
	int    age;            // IN & CALC  - Stores the age of each kid.
	int    countNumberKids;// IN & CALC  - Track number of kid your on.
	string name;           // IN & CALC  - Stores the full name of each kid.

	countNumberKids = 0;
	adminCost = 0.0;
	foodCost = 0.0;
	totalCost = 0.0;
	avgCost = 0.0;

/******************************************************************************
 * OUTPUT - CLASS HEADING
 *****************************************************************************/

	cout << left;
	cout << "**************************************************\n";
	cout << "* PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "* " << setw(14) << "CLASS" << ": " << CLASS << endl;
	cout << "* " << setw(14) << "SECTION" << ": " << SECTION << endl;
	cout << "* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	cout << "Welcome to the Theme Park Planner! Please input each kids "
	"information. \n";
	cout << endl;

/******************************************************************************
 * INPUT - Inputs the name, age, whether a person is vegetarian, and if they
 * 		   like cheese.
 *****************************************************************************/

	for (int countLoop = 0 ; countLoop < 10; countLoop++)
	{
		countNumberKids++;

		cout << left;
		cout << "Kid #" << countNumberKids << ":";
		cout << endl;

		cout << setw(CLM_WIDTH) << "what is your kids name?";
		getline(cin,name);

		cout << setw(CLM_WIDTH) << "How old is the kid?";
		cin >> age;
		cin.ignore(1000, '\n');

		cout << setw(CLM_WIDTH) << "Vegetarian (Y/N)?";
		cin.get(veganChoice);
		cin.ignore(1000, '\n');

		cout << setw(CLM_WIDTH) << "Does he/she like cheese (Y/N)?";
		cin.get(cheeseChoice);
		cin.ignore(1000, '\n');
		cout << right;


/******************************************************************************
 * PROCESSING - The program takes the choice given by the user and
 * 				processes the ride and the food items they will be given
 * 				based on the choice provided.
******************************************************************************/

		veganChoice  = toupper(veganChoice);
		cheeseChoice = toupper(cheeseChoice);

		if (age < 5)
		{
			cout << endl;
			cout << name << " will be going on the Ferris Wheel"
			     << " and will be visiting the Sheep Petting Zoo.";
			cout << endl;
		}
		else if (age >= 5 && age <= 12)
		{
			adminCost = adminCost + PT_ADMIN;

			cout << endl;
			cout << name << " will be going on the Tea Cups"
				 << " and will be playing Laser Tag.";
		    cout << endl;
		}
		else if (age > 12)
		{
			adminCost = adminCost + TE_ADMIN;

			cout << endl;
			cout << name << " will be going on the Roller Coaster"
				 << " and the Zip Line.";
			cout << endl;
		}//END if then else if (age)

		if (veganChoice == 'N' && cheeseChoice == 'Y')
		{
			foodCost = foodCost + CB_PRICE;

			cout << "Pack a Cheeseburger for " << name << "!";
			cout << endl << endl << endl;
		}
		else if (veganChoice == 'N' && cheeseChoice == 'N')
		{
			foodCost = foodCost + HB_PRICE;

			cout << "Pack a Hamburger for " << name << "!";
			cout << endl << endl << endl;
		}
		else if (veganChoice == 'Y' && cheeseChoice == 'Y')
		{
			foodCost = foodCost + CP_PRICE;

			cout << "Pack a Cheese Pizza for " << name << "!";
			cout << endl << endl << endl;
		}
		else if (veganChoice == 'Y' && cheeseChoice == 'N')
		{
			foodCost = foodCost + HG_PRICE;

			cout << "Pack a Happy Garden meal for " << name << "!";
			cout << endl << endl << endl;
		}//END if then else if (food choices)
	}// END for (int countLoop = 0 ; countLoop < 10 ; countLoop++)

	if (countNumberKids != 0)
	{
		totalCost = foodCost + adminCost;
		avgCost = totalCost / countNumberKids;
	}// END IF (countNumberKids != 0)

/******************************************************************************
 * OUTPUT - Displays the total cost for all kids and the average cost per kid.
 *****************************************************************************/

	cout << setprecision(2) << fixed;
	cout << endl << endl;
	cout << left;
	cout << setw(CLM_WIDTH) << "The total cost for the day is:" << "$"
		 << right
		 << setw(MNY_WIDTH) << totalCost;
	cout << endl;

	cout << left;
	cout << setw(CLM_WIDTH) << "The average cost per kid is:" << "$"
		 << right
		 << setw(MNY_WIDTH) << avgCost;
	cout << setprecision(6);
	cout.unsetf(ios::fixed);

	return 0;
}
