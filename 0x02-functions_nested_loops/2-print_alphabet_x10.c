#include "holberton.h"

/**
 * print_alphabet_x10 - calls print_alphabet function 10x
 *
 * print_alphabet: takes a fx
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		print_alphabet();
	_putchar('\n');
}
