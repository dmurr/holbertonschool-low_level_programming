#include "holberton.h"

/**
 * print_numbers - prints number 0 - 9 with putchar
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
