#include "search_algos.h"

/**
 * linear_search - searches for value in an array
 * @array: pointer to the first element in an array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!value || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
