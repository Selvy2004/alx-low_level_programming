#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: takes the input from another
*/

void print_times_table(int n)
{
	int i, result;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			result = i * n;
			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (i < n && result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (i < n && result >= 10)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
