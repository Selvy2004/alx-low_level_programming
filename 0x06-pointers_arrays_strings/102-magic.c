#include "main.h"
#include <stdio.h>

/**
 * main - prints the third element of an array.
 *
 * Return: Always 0.
*/

int main(void)
{
	int a[5] = {98, 402, 198, 298, 1024};
	int *p;

	p = &a[2];
	printf("a[2] = %d\n", *(p + 0));
	return (0);
}
