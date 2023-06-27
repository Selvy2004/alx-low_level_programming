#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 **_strcpy - copies the string pointed to by src, including
 *      the terminating null byte (\0), to the buffer pointed to by dest.
 *@dest: take the input from another
 *@src: take the input from another
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);

}
