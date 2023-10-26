#include "main.h"

/**
 * binary_to_uint - a function that converts binary numbers.
 * @b: char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int i = 0;

	if (!b)
	{
		return (0);
	}
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		x++;
	}
	while (b[x] != '\0')
	{
		i <<= 1;
		if (b[x] == '1')
		{
			i += 1;
		}
		x++;
	}
	return (i);
}
