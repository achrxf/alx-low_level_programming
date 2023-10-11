#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - a function that searches for an integer.
 * @array: int
 * @size: int
 * @cmp: int
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}
	}

	return (-1);
}
