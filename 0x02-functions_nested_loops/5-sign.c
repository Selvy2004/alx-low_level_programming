#include "main.h"

/**
 * print_sign - checks for numbers
 *
 * @n: take the input from another
 *
 * Return: 1 if the number is greater than 0
 *      or 0 if the number is 0
 *      or -1 if the number is less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchat('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
