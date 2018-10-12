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

	if (size == 0 || !*key || strcmp((const char *)key, "") == 0)
		return (0);

	idx = hash_djb2(key) % size;
	return (idx);
}
