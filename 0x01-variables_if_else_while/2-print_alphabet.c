#include <stdio.h>

/**
 *
 * main - prints letters A through Z with putchar
 *
 * Return: 0 is successful
 */

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar (c);
	printf("\n");
	return (0);
}
