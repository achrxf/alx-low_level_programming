#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - A function that returns a pointer to a newly allocated space in memory.
 * @str: char
 * Return: char
*/
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	p = malloc(j * sizeof(*str) + 1);
	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		while(i < j)
		{
			p[i] = str[i];
			i++;
		}
	}
	return (p);
}
