#include "main.h"

/**
 * flip_bits - a function that returns the number of bits.
 * @n: int
 * @m: int
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y;
	unsigned int i, j;

	i = 0;
	y = 1;
	x = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (y == (x & y))
		{
			i++;
		}
		y <<= 1;
	}

	return (i);
}
