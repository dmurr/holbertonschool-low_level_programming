#include "holberton.h"

/**
 * reverse_array - reverse contents of an array
 * @a: array to be reversed
 * @n: number of elements in array
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	temp = 0;
	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
