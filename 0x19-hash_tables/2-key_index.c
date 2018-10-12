#include "hash_tables.h"

/**
 * key_index - converts hash to index
 * @key: hash value
 * @size: size of array in hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (!key || strcmp(key, "") != 0 || size == 0)
	    return (NULL);

	idx = hash_djb2(key) % size;
	return (idx);
}
