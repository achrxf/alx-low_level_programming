#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: char
 * @text_content: char
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, length);

	if (i == -1 || j == -1)
	{
		return (-1);
	}
	close(i);
	return (1);
}
