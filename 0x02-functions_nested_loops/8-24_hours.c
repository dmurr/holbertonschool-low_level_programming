#include "holberton.h"

/**
 *
 *
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;
	int stop;

	stop = 9;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= stop ; j++)
		{
			for(k = 0;  k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
			if(i == 2)
				stop = 3;
		}
	}
}
