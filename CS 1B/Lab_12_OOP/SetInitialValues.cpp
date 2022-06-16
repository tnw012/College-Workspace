/*****************************************************************************
 * AUTHORS       : Trevin Wolfe & Sam Liimatainen
 * Student ID    : 1130500 , 276308
 * LAB #         : 12
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/21/19
 *****************************************************************************/
#include "lab12.h"


void Animal::SetInitialValues(string aName,//IN - Passes a name
							  string aType,//IN - Passes the type
							  int aAge,    //IN - Passes the age
							  float aValue)//IN - Passes the value(decimal)
{
	name  = aName;
	type  = aType;
	age   = aAge;
	value = aValue;
}
