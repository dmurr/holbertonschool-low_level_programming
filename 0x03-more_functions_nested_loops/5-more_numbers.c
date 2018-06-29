#include "holberton.h"

/**
 * more_numbers - displays 10 rows of ints 1 - 14
 *
 */
void more_numbers(void)
{
	int i;
	int j;
	int x;
	int y;

	x = 0;
	y = 0;
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			x = j / 10;
			y = j % 10;
			if (j > 9)
			{
				_putchar(x + '0');
			}
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
