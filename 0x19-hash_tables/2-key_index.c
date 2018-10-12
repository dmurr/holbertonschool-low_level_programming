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
	return (hash_djb2(key) % size);
}
