#include "lists.h"

/**
 * listint_len - finds length of linked list
 * @h: head of linked list
 *
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	int nodeCount = 0;

	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}

/**
 * insert_nodeint_at_index - inserts node at index idx with value n
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

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else if (idx < listint_len(*head))
	{
		node->next = temp;
		prev->next = node;
	}
	else if (idx == listint_len(*head))
	{
		temp->next = node;
		node->next = NULL;
	}
	else
		return (NULL);

	node->n = n;

	return (node);
}
