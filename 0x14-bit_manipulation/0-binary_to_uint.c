#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing binary digits.
 *
 * Return: The converted number,
 * or 0 if b contains non-binary characters or is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}

