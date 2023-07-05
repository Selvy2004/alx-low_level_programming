#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 *@n: takes input from another.
 *
 * Return: the natural square root of a number.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
