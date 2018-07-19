#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 * @b: number of bytes
 *
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}