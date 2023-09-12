#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet, in lowercase, x10.
 * Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
