#include <stdio.h>

/**
 * main - prints 0-9 separatedd by commas and spaces
 *
 * Return: 0 is successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
