#include "main.h"
/**
 * jack_bauer - A function that prints every minute of the day.
 * Return: Always 0 (success).
*/

void jack_bauer(void)
{
	int a = 48, b, c, d;

	while (a <= 50)
	{
		b = 48;
		while (b <= 51)
		{
			c = 48;
			while (c <= 53)
			{
				d = 48;
				while (d <= 57)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
