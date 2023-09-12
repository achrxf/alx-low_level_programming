#include "main.h"
/**
 * main - Print the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
	int i = 97;

	while (i < 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}