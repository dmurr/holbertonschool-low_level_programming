#include "holberton.h"

/**
 *
 *
 *
 *
 */
int primer(int x, int n);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primer(2, n));
}

int primer(int x, int n)
{
	if (n % x == 0 && x != n)
		return (0);
	else if (x == n)
		return (1);
	return (primer(x + 1, n));
}
