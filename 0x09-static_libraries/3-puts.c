#include "main.h"

/**
 * _puts - rints a string, followed by a new line, to stdout.
 *
 * @str: take the input from another
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
