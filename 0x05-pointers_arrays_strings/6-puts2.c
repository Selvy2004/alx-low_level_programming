#include "main.h"
#include <stdio.h>

/**
 * puts2 -  prints every other character of a string
 *
 * @str: take the input from another
 *
*/

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	_putchar('\n');
}
