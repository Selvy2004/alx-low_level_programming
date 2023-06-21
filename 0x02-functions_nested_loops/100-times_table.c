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
				if (i < n && result < 10 && result != 0)
				{
					printf(",   ");
				}
				else if (i < n && result >= 10 && result < 100)
				{
					printf(",  ");
				}
				else if (i < n && result >= 100)
				{
					printf(", ");
				}
				printf("%i", result);
			}
			_putchar('\n');
		}
	}
}
