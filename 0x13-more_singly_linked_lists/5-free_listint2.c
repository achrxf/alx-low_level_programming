#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: const
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}

	*head = NULL;
}
