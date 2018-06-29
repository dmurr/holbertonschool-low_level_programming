#include "holberton.h"

/**
 * print_line - display a line of n length
 * @n: length of line
 *
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		if (n != 0)
			_putchar('_');
	_putchar('\n');
}
