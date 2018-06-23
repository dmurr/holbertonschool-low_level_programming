#include <stdio.h>

/**
 * main - prints 000 - 789
 * all three digits must be different from one another
 *
 * Return: 0 no errors
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i == j || j == k || k == i || i > j || j > k)
					continue;
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
					break;
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
