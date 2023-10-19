#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list.
 * @h: singly linked list.
 * Return: count.
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
