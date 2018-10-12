#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_set - sets hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if successful, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (!ht || !key || !*key || !*value)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
			{
				free(temp->value);
				return (0);
			}
			return (1);
		}
		temp = temp->next;
	}
	if (add_node(&ht->array[idx], key, value) == NULL)
		return (0);

	return (1);
}

/**
 * add_node - adds node to beginning of list
 * @head: head
 * @key: key
 * @value: value
 *
 * Return: address of new node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t *));

	new->key = strdup(key);
	if (new->key == NULL)
		return (NULL);
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (*head);
}
