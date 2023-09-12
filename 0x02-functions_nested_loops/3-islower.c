#include "main.h"
/**
 * _islower - A function that checks for lowercase character.
 * Return: Always 1 (success) else 0.
*/
int _islower(int c)
{
	int i = c;

	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}