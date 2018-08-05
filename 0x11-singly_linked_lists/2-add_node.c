#include "lists.h"

/**
 * add_node - adds node to linked list
 * @head: pointer to head
 * @str:
 *
 * Return: address of new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	while (str[i] != '\0')
		i++;

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	*head = node;

	return (*node);
}
