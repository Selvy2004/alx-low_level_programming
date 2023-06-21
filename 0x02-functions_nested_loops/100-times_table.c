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
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j == 0)
				{
					printf("0,   ");
				}
				else if (j == n)
				{
					printf("%2d", result);
				}
				else
				{
					printf("%2d,  ", result);
				}
			}
		printf("\n");
		}
	}
}
