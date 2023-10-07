#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: int
 * @argv: char
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int x = argc - 1;

	(void)argv;
	printf("%d\n", x);
	return (0);
}
