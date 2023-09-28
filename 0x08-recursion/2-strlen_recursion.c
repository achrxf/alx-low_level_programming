#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: char type
 * Return: void
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
