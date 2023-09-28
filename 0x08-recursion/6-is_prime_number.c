#include "main.h"

/**
 * is_prime_number - A function that returns 1 if the input int is a prime num.
 * @n: int type
 * Return: int
*/
int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, i));
}

/**
* prime - A function that returns 1 if the input int is a prime number.
* @i: int type
* @j: int type
* Return: int
*/
int prime(int i, int j)
{
	if (j <= 1)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (prime(i, j - 1));
}
