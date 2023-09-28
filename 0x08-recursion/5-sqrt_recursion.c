#include "main.h"

/**
 * _sqrt_recursion - A function that returns the natural square root of a num.
 * @n: int type
 * Return: int
*/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (square_root(0, n));
}

/**
 * square_root - A function that returns the square root of a number
 * @i: int type
 * @j: int type
 * Return: int
 */
int square_root(int i, int j)
{
	if (i > j / 2)
		return (-1);
	else if (i * i == j)
		return (i);
	return (square_root(i + 1, j));
}
