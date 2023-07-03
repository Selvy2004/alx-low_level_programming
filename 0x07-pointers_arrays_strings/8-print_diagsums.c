#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @size: takes the input from another.
 * @a: takes the input from another.
*/

void print_diagsums(int (*a)[size], int size)
{
	int i, j, sum1, sum2, s;

	sum1 = 0;
	sum2 = 0;
	s = size - 1;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
	}

	for (j = 0; j < size; j++)
	{
		sum2 += a[s][j];
		s--;
	}
	printf("%i, %i", sum1, sum2);
}
