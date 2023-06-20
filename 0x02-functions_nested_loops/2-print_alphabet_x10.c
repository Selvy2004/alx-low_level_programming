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
	for (int n = 0 ; n < 10 ; n++)
	{
		for (char ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
