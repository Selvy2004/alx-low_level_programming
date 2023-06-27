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
	int i;
	int len = strlen(str);
	int s = len / 2;

	for (i = s; i < len - 1; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
