#include "main.h"

/**
 * _islower - checks for alphabetic character
 *
 * @c: take the input from another
 *
 * Return: 1 if character lowercase
 *      or 0 for  any thigh another
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
