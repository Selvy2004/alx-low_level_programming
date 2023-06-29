#include "main.h"

/**
 * *_strncat - concatenates two strings.
 *
 * @dest: take the input from another
 * @src: take the input from another
 * @n: take the input from another
 * Return: result
*/

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	int i = 0;

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (result);
}
