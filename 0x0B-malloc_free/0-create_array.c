#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - A function that creates an array of chars.
 * @size: unsigned int
 * @c: char
 * Return: char
*/
char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
	{
		return (0);
	}
	while (size--)
	{
		i[size] = c;
	}
	return (i);
}
