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
	int last_digital = n % 10;

	if (last_digital < 0)
	{
		last_digital = -last_digital;
	}
	char last_digital_ch = last_digital + '0';

	_putchar(last_digital_ch);
	return (last_digital);
}
