#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it.
 * @filename: char
 * @letters: size t
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *i;

	if (filename == NULL)
	{
		return (0);
	}
	i = malloc(sizeof(char) * letters);
	if (i == NULL)
	{
		return (0);
	}
	x = open(filename, O_RDONLY);
	y = read(x, i, letters);
	z = write(STDOUT_FILENO, i, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(i);
		return (0);
	}

	free(i);
	close(x);
	return (z);
}
