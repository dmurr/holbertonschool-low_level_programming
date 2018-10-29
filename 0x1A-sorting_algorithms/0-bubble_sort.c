#include "sort.h"

/**
 * bubble_sort - sorts array
 * @array: thing to be sorted
 * @size: size of thing
 *
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int swapped;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
