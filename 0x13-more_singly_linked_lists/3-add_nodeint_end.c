#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list.
 * @head: const
 * @n: const int
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *j = *head;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	while (j->next)
		j = j->next;

	j->next = i;

	return (i);
}
