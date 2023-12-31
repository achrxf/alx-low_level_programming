#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: int
 * @size: int
 * Return: 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			p[i] = 0;
		}
		return (p);
	}
	else
	{
		return (NULL);
	}
}
