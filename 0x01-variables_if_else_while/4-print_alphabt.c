#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 * Return: Always 0 (success)
*/
int main(void)
{
	char i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');

	return (0);
}
