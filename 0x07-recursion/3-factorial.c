#include "holberton.h"

/**
 * factorial - finds the factorial
 * @n: number
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n > 0)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	else
		return (-1);
}
