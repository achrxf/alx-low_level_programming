#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers, from 0 to 9.
 * Return: 0
*/

void print_most_numbers(void)
{
	char i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
			i++;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}
