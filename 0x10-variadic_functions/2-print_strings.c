#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: char
 * @n: int
 * Return: int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *j;

	va_list strings;

	va_start(strings, n);

	while (i < n)
	{
		j = va_arg(strings, char *);
		if (j == NULL)
		{
			j = "(nil)";
		}
		if (i == 0 || i == n || separator == NULL)
		{
			printf("%s", j);
		}
		else
		{
			printf("%s%s", separator, j);
		}
		i++;
	}
	va_end(strings);
	printf("\n");
}
