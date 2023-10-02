#include "main.h"
/**
 * _isalpha - A function that checks for lowercase character.
 * @c: char type letter
 * Return: Always 1 (success) else 0.
*/
int _isalpha(int c)
{
	int i = c;

	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
