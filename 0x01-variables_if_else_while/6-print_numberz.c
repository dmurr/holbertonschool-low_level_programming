#include <stdio.h>

/**
 * main - print 0 - 9 without printf and puts
 *
 * Return: 0 is successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
