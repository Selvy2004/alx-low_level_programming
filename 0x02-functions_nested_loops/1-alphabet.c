#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: This function prints the lowercase alphabet to the console
 * using the _putchar function.
 *
*/

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
