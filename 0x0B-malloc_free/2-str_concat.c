#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_length - length of an str.
 * @l: char
 * Return: int
*/
int str_length(char *l)
{
	int i = 0;
	while ( l[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *str_concat - A function that concatenates two strings.
 * @s1: char
 * @s2: char
 * Return: char
*/
char *str_concat(char *s1, char *s2)
{
	int a, b, c = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	a = str_length(s1);
	b = str_length(s2);
	p = malloc((a + b) * sizeof(char) + 1);
	if (p == 0)
	{
		return (0);
	}
	while ( c <= a + b)
	{
		if (c < a)
		{
			p[c] = s1[c];
		}
		else
		{
			p[c] = s2[c - a];
		}
	c++;
	}
	p[c] = '\0';
	return (p);
}
