#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: int type
 * Return: 0
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
