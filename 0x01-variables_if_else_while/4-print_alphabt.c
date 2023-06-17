#include <stdio.h>

/**
 * main - Entry point
 *
 * Desctiption: false or true validation
 * Return: 0 (success)
*/

int main(void)
{
	char letter = 'a';

	while (letter >= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
