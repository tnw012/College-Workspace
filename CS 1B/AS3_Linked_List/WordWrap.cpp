/*****************************************************************************
 * AUTHORS       : Trevin Wolfe
 * Student ID    : 1130500
 * ASSIGN #      : 3
 * CLASS         : CS1B
 * SECTION       : MW-7:30pm
 * DUE DATE      : 11/6/19
 *****************************************************************************/

#include "as3.h"

/******************************************************************************
 * FUNCTION Word Wrap
 *=============================================================================
 * This function receives in a string and a line length and wraps the string at
 * the specified width, and then returns the wrapped string to the main function
 *
 * Returns : wrapped.str()
 *-----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  text		 : has to be previously defined
 *  line_length  : has to be previously defined
 *
 *-----------------------------------------------------------------------------
 * POST-CONDITIONS
 *  This function will return a string that has been wrap
 *  to the specified line length
 *****************************************************************************/

#include "as3.h"

string WordWrap(string text,       //IN - Passes the string to be wrapped
				size_t line_length)//IN - Passes the length to be wrapped at
{
    istringstream words(text);//CALC - Used to convert the string to a stream
    ostringstream wrapped;    //CALC - Tracks the final wrap of a string
    string word;              //CALC - Gets the length for the stream

    if (words >> word)
    {
        wrapped << word;
        size_t space_left = line_length - word.length();
        while (words >> word)
        {
        	if (space_left < word.length() + 1)
        	{
                wrapped << '\n' << word;
                space_left = line_length - word.length();
            }
        	else
        	{
                wrapped << ' ' << word;
                space_left -= word.length() + 1;
            }
        }
    }
    return wrapped.str();
}
