#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: 1st int in swap
 * @b: 2nd int in swap
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
