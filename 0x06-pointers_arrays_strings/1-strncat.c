#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * @dest: char
 * @src: char
 * @n: int
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
