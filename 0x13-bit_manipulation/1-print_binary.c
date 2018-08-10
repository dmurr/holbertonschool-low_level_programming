#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_binary - converts int to binary
 * @n: number to be converted
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;
	unsigned long int k = n;
	unsigned long int x;

	if (k < 1)
	{
		_putchar(k + '0');
	}
	while (k > 0)
	{
		k = k >> 1;
		i++;
	}
	while (i > 0)
	{
		i--;
		x = n >> i;
		_putchar((x & 1) + '0');
	}
}
