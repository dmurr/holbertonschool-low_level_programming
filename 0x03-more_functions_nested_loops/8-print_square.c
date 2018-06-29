#include "holberton.h"

/**
 * print_square - print rows and columns of size length
 * @size: square size
 *
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
