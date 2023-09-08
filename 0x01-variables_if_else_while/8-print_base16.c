#include <stdio.h>

/**
 * main - Prints alphabet and numbers
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 97;
	int j = 48;

	while (j <= 57)
	{
		putchar(j);
		j++;
	}
	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
