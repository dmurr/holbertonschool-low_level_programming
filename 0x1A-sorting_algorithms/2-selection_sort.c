#include "sort.h"

/**
 * selection_sort -
 * @array: the array
 * @size: size of array
 *
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int min_val, min_idx;

	if (!*array || !array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_val = array[i];

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min_val)
			{
				min_idx = j;
				min_val = array[j];
			}
		}
		array[min_idx] = array[i];
		array[i] = min_val;
		print_array(array,size);
	}

}
