#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Desctiption: print alphabet using void print_alphabet
 * Return: 0 (success)
*/

void print_alphabet(void);

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
