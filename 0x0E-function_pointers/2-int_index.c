#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to compare values function
 *
 * Return: First index match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while(!cmp(array[i]) && i < size)
	{
		i++;
	}

	if (i == size)
		return (-1);

	return (i);
}
