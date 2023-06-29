#include "main.h"

/**
 * *leet - encodes a string into 1337.
 *
 * @str: take the input from another
 *
 * Return: str
*/

char *leet(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p == 'a' || *p == 'A')
		{
			*p = '4';
		}
		if (*p == 'e' || *p == 'E')
		{
			*p = '3';
		}
		if (*p == 'o' || *p == 'O')
		{
			*p = '0';
		}
		if (*p == 't' || *p == 'T')
		{
			*p = '7';
		}
		if (*p == 'l' || *p == 'L')
		{
			*p = '1';
		}
		p++;
	}
	return (str);
}
