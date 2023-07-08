#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: take the input from another
 *
 * Return: length of a string.
*/

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
