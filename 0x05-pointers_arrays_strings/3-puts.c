#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line.
 * @str: char
 * Return: Always 0.
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
