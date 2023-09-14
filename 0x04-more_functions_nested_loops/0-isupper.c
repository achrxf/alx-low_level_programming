#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: int type
 * Return: 1 if uppercase 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
