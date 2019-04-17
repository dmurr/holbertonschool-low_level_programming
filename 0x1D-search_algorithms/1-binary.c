#include "search_algos.h"

/**
 * binary_search - uses binary search on a sorted array
 * @array: pointer to the first element in a sorted array
 * @size: the number of elements in the array
 * @value: value to be searched for
 * Return: First index where value is or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, i;
	int left = 0;
	int right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;


		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[i]);

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
			return (mid);
	}

	return (-1);
}
