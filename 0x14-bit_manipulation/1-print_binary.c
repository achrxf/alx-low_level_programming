#include "main.h"

/**
 * _power - calculate (base and power)
 * @base: int
 * @power: int
 * Return: num
 */
unsigned long int power_of_base(unsigned int base, unsigned int power)
{
	unsigned long int x;
	unsigned int i;

	x = 1;
	for (i = 1; i <= power; i++)
	{
		x *= base;
	}
	return (x);
}

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: int
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, j;
	char c;

	c = 0;
	i = power_of_base(2, sizeof(unsigned long int) * 8 - 1);

	while (i != 0)
	{
		j = n & i;
		if (j == i)
		{
			c = 1;
			_putchar('1');

		}
		else if (c == 1 || i == 1)
		{
			_putchar('0');
		}
		i >>= 1;
	}
}
