#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 * Return: Always 0 (success)
*/
int main(void)
{
	char i, j;

	i = 97;
	j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
