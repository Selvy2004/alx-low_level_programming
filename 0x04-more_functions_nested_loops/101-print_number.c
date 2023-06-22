#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: take the input from another
 *
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar(num % 10 + '0');
}
