#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
*/


void times_table(void)
{
	int n, i, result;

	for (n = 0; n < 9; n++)
	{
		for (i = 0; i < 9; i++)
		{
			result = n * i;
			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
