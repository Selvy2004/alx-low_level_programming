#include <stdio.h>

/**
 * main - Entry point
 *
 * Desctiption: false or true validation
 * Return: 0 (success)
*/

int main(void)
{
	int n1 = 0;
	int n2 = 1;

	while (n1 > 10)
	{
		while (n2 <= 9)
		{
			putchar(n1 + '0');
			putchar(n2 + '1');
			if (n2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
