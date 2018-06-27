#include "holberton.h"

/**
 * times_table - creates a 9 by 9 multiplication table
 *
 */
void times_table(void)
{
	int i;
	int j;
	int p;
	int var1;
	int var2;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			p = i * j;
			var2 = p % 10;
			p /= 10;
			var1 = p;

			if (var1 != 0)
				_putchar(var1 + '0');
			else if (i != 0)
				_putchar(' ');
			_putchar(var2 + '0');

			if (i == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
