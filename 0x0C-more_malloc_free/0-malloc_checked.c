#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - A function that allocates memory using malloc.
 * @b: int
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
