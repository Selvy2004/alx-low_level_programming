#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: take the input from another
*/

void puts_half(char *str)
{
	int i, s;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		s = len / 2;
	}
	else
	{
		s = (len - 1) / 2
	}
	for (i = s; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
