#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of elements
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	return (arr);
}