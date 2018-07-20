#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a new memory size for string
 * @ptr: pointer to original string
 * @old_size: byte size of original string
 * @new_size: byte size of new memory allocation
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < new_size; i++)
	{
		*(nptr + i) = *((char *)ptr + i);
	}

	free(ptr);
	return (nptr);
}
