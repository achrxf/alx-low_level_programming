#include <stdio.h>
#include <stdlib.h>

/**
 * integer - checks for int
 * @p: char
 * Return: 0
 */
int integer(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] < 48 || p[i] > 57)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main - multiplies two numbers.
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int res = 0, i, conv;

	if (argc < 3)
	{
		printf("0\n");
		exit(-1);
	}
	for (i = 1; i < argc; i++)
	{
		conv = atoi(argv[i]);
		if (conv < 0 || integer(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			res += conv;
		}
	}
	printf("%d\n", res);
	return (0);
}
