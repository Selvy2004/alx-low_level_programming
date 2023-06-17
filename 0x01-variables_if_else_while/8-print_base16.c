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

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	n = 10;

	while (n < 16)
	{
		putchar(n + 'a');
		n++;
	}
	putchar('\n');
	return (0);
}
