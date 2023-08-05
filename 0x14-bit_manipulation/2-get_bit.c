#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check.
 * @index: The index of the bit to get (starting from 0).
 *
 * Return: The value of the bit at index index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1;

	mask <<= index;

	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
