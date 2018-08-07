#include "lists.h"

/**
 * inert_nodeint_at_index - inserts node at index idx with value n
 * @head: pointer to list head
 * @idx: desired index for new node
 * @n: node contains value n
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *node;
	listint_t *prev;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	temp = *head;

	if (!temp)
		return (NULL);

	while (temp->next && i < idx)
	{
		if (i == idx - 1)
			prev = temp;
		temp = temp->next;
		i++;
	}
	prev->next = node;
	node->next = temp;
	node->n = n;
	return (node);
}
