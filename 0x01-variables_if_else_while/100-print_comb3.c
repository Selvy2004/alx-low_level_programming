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

	while (n1 > 9 && n2 >= 9)
	{
		putchar(n1 + '0');
		putchar(n2 + '1');
		if (n2 < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
