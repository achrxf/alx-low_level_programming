#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: char
 * @n: int
 * Return: int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int j;

	va_list numbers;

	va_start(numbers, n);

	while (i < n)
	{
		j = va_arg(numbers, int);
		if (i == 0 || i == n)
		{
			printf("%d", j);
		}
		else
		{
			printf("%s%d", separator, j);
		}
		i++;
	}
	printf("\n");
}
