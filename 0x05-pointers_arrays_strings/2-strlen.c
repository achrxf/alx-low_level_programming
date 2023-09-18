#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: char
 * Return: Always 0.
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
