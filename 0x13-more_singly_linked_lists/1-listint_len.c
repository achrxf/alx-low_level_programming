#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a list.
 * @h: const
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
