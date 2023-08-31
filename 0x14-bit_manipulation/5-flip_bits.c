#include "main.h"

/**
 * flip_bits - Returns the number of bits
 * to flip to get from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		if (diff & 1)
		{
			count++;
		}

		diff >>= 1;
	}

	return (count);
}
