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
	int len = strlen(s);
	char ch;
	int i;

	len--;

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len];
		s[len] = ch;
		len--;
	}
	_putchar('\n');
}
