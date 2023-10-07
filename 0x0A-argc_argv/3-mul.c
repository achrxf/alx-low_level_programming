#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(-1);
	}
	for (i = 0; i < argc; i++)
	{
		int num = atoi(argv[i]);
		result = num + num;
	}
	printf ("%d\n", result);
	return (0);
}
