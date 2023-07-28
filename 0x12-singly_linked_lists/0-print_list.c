#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%u] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");

		current = current->next;
		node_count++;
	}

	return (node_count);
}
