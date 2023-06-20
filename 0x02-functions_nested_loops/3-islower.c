#include "main.h"

/**
 * int _islower -check is c a lowercase alphabet or not
 * Description: This function takes a character as input and check
 * if it lowercase alphabet or not.
 *
 * if tha input is a character the function returns 1 otherwise it returns 0.
 *
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
