#include "main.h"

/**
 * rev_string - reverses a string.
 *
 *@s: take the input from another
*/

void rev_string(char *s)
{
	int len;
	char ch;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	len--;

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		ch[i] = s[len];
		s[len] = ch;
		len--;
	}
	_putchar('\n');
}
