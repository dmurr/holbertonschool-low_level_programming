#include "search_algos.h"
#include <math.h>

/**
 * min - finds the mininum value
 * @a: value
 * @b: another value
 * Return: minimum value
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}

/**
 * jump_search - searches sorted array using jump sort algorithm
 * @array: pointer to the first index in array
 * @size: number of elements in the array
 * @value: value to be searched for
 * Return: First index where value is found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt(size);
	unsigned int left = 0;
	unsigned int right = 0;
	unsigned int i = 0;

	if (!array)
		return (-1);

	while (left < size && array[left] <= value)
	{
		right = min(size - 1, left + jump);

		printf("Value checked array[%d] = [%d]\n", left, array[left]);

		if (array[left] <= value && array[right] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n"
			       , left, right);
			break;
		}

		left += jump;
	}

	if (left >= size || array[left] > value)
	{
		printf("Value found between indexes [%d] and [%d]\n", right, left);
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		return (-1);
	}

	right = min(size - 1, right);

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
