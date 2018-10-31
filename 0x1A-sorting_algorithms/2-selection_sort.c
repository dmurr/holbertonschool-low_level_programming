#include "sort.h"

/**
 * selection_sort - sorts integers in ascending order
 * @array: the array
 * @size: size of array
 *
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx, temp;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (i != min_idx)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}

}
