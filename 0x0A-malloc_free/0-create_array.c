#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - allocates space in memory for array and initializes it.
 * @size: array size to be created
 * @c: character initializing array
 *
 * Return: pointer to string array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		s[i] = c;

	if (s == NULL)
		return (NULL);

	return (s);
}