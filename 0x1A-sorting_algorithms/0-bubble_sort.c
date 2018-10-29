#include <stdio.h>
#include "sort.h"

/**
 * swap - swaps to elements in a list
 * @p1: first element
 * @p2: second element
 *
 */
void swap(int *p1, int *p2)
{
	int temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/**
 * print_array - prints an array
 * @array: array to be printed
 * @size: size of array
 *
 */
void print_array(int *array, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (i < size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
	}
	printf("\n");
}


/**
 * bubble_sort - sorts array
 * @array: thing to be sorted
 * @size: size of thing
 *
 */
void bubble_sort(int *array, size_t size)
{
	int i, j;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
