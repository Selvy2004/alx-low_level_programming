#include "main.h"

/**
 * print_rev - rints a string, in reverse, followed by a new line.
 *
 * @s: take the input from another
*/

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
