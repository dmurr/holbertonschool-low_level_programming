#include <stdio.h>

/**
 * print_array - display all ints in array formated with commas and spaces
 * @a: array to be printed
 * @n: array size
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
	}
	printf("\n");
}
