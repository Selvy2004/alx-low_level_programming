#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string.
 *
 *@s: take the input from another
*/

void rev_string(char *s)
{

	int length, i, j;

	length = strlen(s);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
