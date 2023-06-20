#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: This function prints the lowercase alphabet to the console
 * using the _putchar function.
 *
*/

void print_alphabet_x10(void)
{
	char ch = 'a';

	for (int n = 0 ; n < 10 ; n++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
