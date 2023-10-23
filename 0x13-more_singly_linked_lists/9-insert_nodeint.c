#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node.
 * @head: const
 * @idx: int
 * @n: int
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *j;
	listint_t *i = *head;

	j = malloc(sizeof(listint_t));
	if (!j || !head)
		return (NULL);

	j->n = n;
	j->next = NULL;

	if (idx == 0)
	{
		j->next = *head;
		*head = j;
		return (j);
	}

	for (x = 0; i && x < idx; x++)
	{
		if (x == idx - 1)
		{
			j->next = i->next;
			i->next = j;
			return (j);
		}
		else
			i = i->next;
	}

	return (NULL);
}
