#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		if (current <= next)
		{
			*h = NULL;
			return (count);
		}
		current = next;
	}
	*h = NULL;

	return (count);
}
