#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index.
 * @head: const
 * @index: int
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i = *head;
	listint_t *j = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(i);
		return (1);
	}

	while (x < index - 1)
	{
		if (!i || !(i->next))
			return (-1);
		i = i->next;
		x++;
	}


	j = i->next;
	i->next = j->next;
	free(j);

	return (1);
}
