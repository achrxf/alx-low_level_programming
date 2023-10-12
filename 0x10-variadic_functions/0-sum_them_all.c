#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: int
 * Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	int add = 0;
	unsigned int i = 0;

	va_list ints;

	va_start(ints, n);

	if (n == 0)
	{
		return (0);
	}
		while (i < n)
		{
			add = (add) + va_arg(ints, int);
			i++;
		}

	va_end(ints);
	return (add);
}
