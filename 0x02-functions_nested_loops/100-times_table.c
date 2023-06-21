#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: takes the input from another
*/

void print_times_table(int n)
{
	int i, j, result;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				result = i * j;
				if (result < 10)
				{
					_putchar(result + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(result / 10 + '0');
					_putchar(result % 100 + '0');
				}
				else if (result >= 100)
				{
					_putchar(result / 100 + '0');
					_putchar((result % 100) / 10 + '0');
					_putchar((result % 100) % 10 + '0');
				}
				if (result < 10)
				{
					printf(",   ");
				}
				else if (result >= 10 && result < 100)
				{
					printf(",  ");
				}
				else if (result >= 100)
				{
					printf(", ");
				}
			}
			_putchar('\n');
		}
	}
}
