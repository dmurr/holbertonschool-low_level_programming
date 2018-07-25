#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through array and calls function on each index.
 * @array: array to iterate through
 * @size: number of elements in array
 * @action: pointer to function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
