#include "search_algos.h"

/**
 * linear_search - searches array sequentially for value
 * @array: pointer to first element in array to be searched
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: First index where value is or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%i]\n", i, array[i]);

		if (array[i] == value)
			return (i);

	}
	return (-1);
}
