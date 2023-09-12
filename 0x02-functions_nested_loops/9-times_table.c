#include "main.h"
/**
 * times_table - A function that prints the 9 times table, starting with 0.
 * Return: Always 0 (success).
*/

void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			int sum;

			sum = i * j;
			if (sum > 9)
			{
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar(sum + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
