#include <stdio.h>

/**
 * main - print 0 - 9 without printf and puts
 *
 * Return: 0 is successful
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = i + '0';
		putchar(c);
	}
	putchar('\n');
	return (0);
}
