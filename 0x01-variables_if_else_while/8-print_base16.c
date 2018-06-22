#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: 0 is successful
 */

int main(void)
{
	int i;
	char c;

	for (i = 1; i < 10; i++)
		putchar (i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar (c);
	putchar('\n');
	return (0);
}
