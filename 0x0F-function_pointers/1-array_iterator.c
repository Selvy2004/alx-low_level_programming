#include <stddef.h>

/**
 * array_iterator - executes a function given as
 *                 a parameter on each element of an array.
 * @array: take the input from another.
 * @size: take the input from another.
 * @action: take the input from another.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
	}
}
