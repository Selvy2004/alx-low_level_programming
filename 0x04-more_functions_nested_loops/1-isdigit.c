#inclide "main.h"

/**
 * _isdigit - checks for alphabetic character
 *
 * @c: take the input from another
 *
 * Return: 1 if digital bettwen 1 : 9
 *      or 0 for  any thigh another
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
