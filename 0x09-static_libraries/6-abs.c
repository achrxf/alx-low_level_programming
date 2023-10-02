#include "main.h"
/**
 * _abs - A function that computes the absolute value of an integer.
 * @i: int type
 * Return: Always 0 (success).
*/

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}

}
