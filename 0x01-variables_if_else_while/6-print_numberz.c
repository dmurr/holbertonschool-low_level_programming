#include <stdio.h>

/**
 * main - print 0 - 9 without printf and puts
 *
 * Return: 0 is successful
 */

int main(void)
{
	char i;

	for (i = 0; i < 10; i++)
		i += '0';
		putchar(i);
	putchar('\n');
	return (0);
}
