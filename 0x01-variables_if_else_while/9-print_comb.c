#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if(i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
