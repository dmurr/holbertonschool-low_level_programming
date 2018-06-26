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
	int x;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			p = i * j;
			var2 = p % 10;
			x = p;
			while (x > 10)
				x /= 10;
			var1 = x;

			if (p > 10)
				_putchar(var1 + '0');
			else
				_putchar(' ');
			_putchar(var2 + '0');

			if(i == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
