#include "main.h"

/**
 * _isupper - checks for alphabetic character
 *
 * @c: take the input from another
 *
 * Return: 1 if character uppercase
 *      or 0 for  any thigh another
*/

int _isupper(int c)
{
	if (c + '0' <= 'Z' || c + '0' >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
