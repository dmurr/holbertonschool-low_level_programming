#include "sort.h"

/**
 * selection_sort - sorts integers in ascending order
 * @array: the array
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int select_val, select_idx;

	if (!*array || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		select_val = array[i];

		for (j = i; j < size; j++)
		{
			if (array[j] < select_val)
			{
				select_idx = j;
				select_val = array[j];
			}
		}
		array[select_idx] = array[i];
		array[i] = select_val;
		print_array(array, size);
	}

}
