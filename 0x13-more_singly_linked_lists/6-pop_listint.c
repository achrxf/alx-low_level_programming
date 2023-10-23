#include "lists.h"

/**
 * pop_listint - a function that deletes the head node.
 * @head: const
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *i;
	int j;

	if (!head || !*head)
		return (0);

	j = (*head)->n;
	i = (*head)->next;
	free(*head);
	*head = i;

	return (j);
}
