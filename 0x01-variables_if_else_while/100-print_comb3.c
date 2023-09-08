#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 48;
	int j = 48;

	while (j <= 57)
	{
		i = 48;
		while (i <= 57)
		{
			if (j != i && j < i)
			{
				putchar(j);
				putchar(i);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
	}
	putchar('\n');

	return (0);
}
