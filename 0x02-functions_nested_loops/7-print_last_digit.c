#include "main.h"

/**
 * print_last_digit - checks for alphabetic character
 *
 * @n: take the input from another
 *
 * Return: the value of the last digital
 *
*/

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = -last;
	}
	char last_char = last + '0';

	_putchar(last_char);
	return (last);
}
