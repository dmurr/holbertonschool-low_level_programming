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
	list_t *temp = NULL;
	list_t *node;
	int i;

	if (!head || !str)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (!(*head))
		*head = node;
	else
	{
		temp = *head;
		*head = node;
		node->next = temp;
	}

	return (node);

}
