#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	while (shift >= 0)
	{
		unsigned long int bit = (n >> shift) & 1;

		if (bit == 1)
			flag = 1;

		if (flag)
			_putchar(bit + '0');

		shift--;
	}
}
