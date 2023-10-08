#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: char
 * @s2: char
 * @n: int
 * Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = n, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s1[j]; j++)
	{
		i++;
	}
	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (j = 0; s1[j]; j++)
	{
		p[i++] = s1[j];
	}
	for (j = 0; s2[j] && j < n; j++)
	{
		p[i++] = s2[j];
	}
	p[i] = '\0';

	return (p);
}
