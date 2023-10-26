#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: int
 * @index: int
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	x = ~(1 << index);
	*n = *n & x;

	return (1);
}
