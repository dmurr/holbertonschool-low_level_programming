#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all digits between n and 98, inclusive
 * @n: checking all num from 98 to n
 *
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}
	}
}
