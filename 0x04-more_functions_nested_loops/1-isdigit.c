#include "main.h"

/**
 * _isdigit - A function that checks for uppercase character.
 * @c: int type
 * Return: 1 if uppercase 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
