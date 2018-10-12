#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	int idx;

	if (!ht || !key || !*key)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}
	return (NULL);
}
