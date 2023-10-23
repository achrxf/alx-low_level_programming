#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: const
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
