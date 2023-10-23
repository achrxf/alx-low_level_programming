#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list.
 * @head: const
 * @index: int
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *i = head;

	while (i && x < index)
	{
		i = i->next;
		x++;
	}

	return (i ? i : NULL);
}
