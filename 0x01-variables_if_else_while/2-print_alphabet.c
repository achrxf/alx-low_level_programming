#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 * Return: Always 0 (success)
*/
int main(void)
{
	char i;

	i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
