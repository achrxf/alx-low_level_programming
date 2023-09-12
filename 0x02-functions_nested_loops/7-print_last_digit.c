#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number.
 * @i: int type
 * Return: Always 0 (success).
*/

int print_last_digit(int i)
{
	int l;

	if (i < 0)
	{
		l = -1 * (i % 10);
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = i % 10;
		_putchar(l + '0');
		return (l);
	}
}
