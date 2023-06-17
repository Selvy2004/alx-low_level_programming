#include <stdio.h>

/**
 * main - Entry point
 *
 * Desctiption: false or true validation
 * Return: 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n > 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
		}
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
