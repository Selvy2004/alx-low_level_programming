#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: takes input from another.
 * Return: the natural square root of a number.
*/

int _sqrt_recursion(int n)
{
	int low = 0, high = n, mid = 0, res = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		if (mid * mid < n)
		{
			low = mid + 1;
			res = mid;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (res);
}
