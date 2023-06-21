#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - checks for alphabetic character
 *
 * @n: take the input from another
 *
 * Return: the value of the last digital
 *
*/

int print_last_digit(int n)
{
	printf("%i", n % 10);
	return (n % 10);
}
