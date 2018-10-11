#include "hash_tables.h"
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **arr;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (!arr)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	for(i = 0; i < size; i++)
		arr[i] = NULL;

	table->array = arr;

	return (table);
}
