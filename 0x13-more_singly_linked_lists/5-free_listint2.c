#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Double pointer to the head node of the linked list.
 *
 * The function sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
