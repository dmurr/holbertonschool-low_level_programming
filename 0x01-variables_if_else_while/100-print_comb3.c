#include <stdio.h>

/**
 * main - prints 00 - 99
 * skip same combos (ex. if 01 displayed skip 10)
 * skip pairs that have the same num (ex. 22, 55, etc.)
 *
 * Return: 0 is successful
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == j || i > j)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				break;
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
