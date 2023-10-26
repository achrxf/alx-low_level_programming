#include "main.h"

/**
 * set_bit - a function that returns the value of a bit at a given index.
 * @index: int
 * @n: int
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	x = 1 << index;
	*n = *n | x;

	return (1);
}
