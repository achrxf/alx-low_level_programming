#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list.
 * @head: const
 * @n: dconst int
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	i->n = n;
	i->next = *head;
	*head = i;

	return (i);
}
