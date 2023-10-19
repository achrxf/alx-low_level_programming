#include "lists.h"

/**
 * add_node_end - adds a new node.
 * @head: head
 * @str: string
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i, *j;
	size_t x;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);

	i->str = strdup(str);

	for (x = 0; str[x]; x++)
		;

	i->len = x;
	i->next = NULL;
	j = *head;

	if (j == NULL)
	{
		*head = i;
	}
	else
	{
		while (j->next != NULL)
			j = j->next;
		j->next = i;
	}

	return (*head);
}
