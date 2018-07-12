#include "holberton.h"

/**
 * _sqrt_recursion - finds natural square root
 * @n: number
 * @x: multiplier
 *
 * Return: square root
 */
int square(int x, int n);

int _sqrt_recursion(int n)
{
	return (square(0, n));
}

/**
 * square - square number and checks if is square root
 * @x: multiplier
 * @n: number
 *
 * Return: square root
 */
int square(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);

	return (square(x + 1, n));
}
