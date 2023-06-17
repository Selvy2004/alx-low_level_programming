#include <stdio.h>

/**
 * main - Entry point
 *
 * Desctiption: false or true validation
 * Return: 0 (success)
*/

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
