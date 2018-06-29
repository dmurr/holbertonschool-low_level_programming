#include "holberton.h"
/**
 * print_triangle - displays a triangle
 *
 * @size: width and height of triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
        {
                for(j = (size - i); j >= 1; j--)
                {
                        _putchar(' ');
                }
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
                _putchar('\n');
        }
}
