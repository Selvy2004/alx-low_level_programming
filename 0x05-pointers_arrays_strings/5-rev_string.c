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
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	_putchar('\n');
}
