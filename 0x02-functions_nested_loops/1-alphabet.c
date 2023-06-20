#include <stdio.h>
#include "main.c"

void print_alphabet(void);

/**
 * main - Entry point
 *
 * Desctiption: print alphabet using void print_alphabet
 * Return: 0 (success)
*/

int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: This function prints the lowercase alphabet to the console
 * using the _putchar function.
 *
 * Return: None
*/

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
