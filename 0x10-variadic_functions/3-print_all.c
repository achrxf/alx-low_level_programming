#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: char
 * Return: int
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *p, *x = "";

	va_list j;

	va_start(j, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", x, va_arg(j, int));
					break;
				case 'i':
					printf("%s%d", x, va_arg(j, int));
					break;
				case 'f':
					printf("%s%f", x, va_arg(j, double));
					break;
				case 's':
					p = va_arg(j, char *);
					if (!p)
						p = "(nil)";
					printf("%s%s", x, p);
					break;
				default:
					i++;
					continue;
			}
			x = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(j);
}
