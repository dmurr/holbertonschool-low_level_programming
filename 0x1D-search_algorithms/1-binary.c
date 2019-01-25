#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: array to be searched
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of value
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid = 0, i = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d, ", array[i]);
		printf("\n");

		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
