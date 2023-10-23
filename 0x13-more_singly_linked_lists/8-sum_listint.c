#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a list.
 * @head: const
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *i = head;

	while (i)
	{
		x += i->n;
		i = i->next;
	}

	return (x);
}
