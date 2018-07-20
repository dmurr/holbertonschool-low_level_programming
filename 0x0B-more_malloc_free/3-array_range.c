#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - contains all values from min to max
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i < (max + 1); i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}
