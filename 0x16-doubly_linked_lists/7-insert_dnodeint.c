#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: pointer to doubly linked list
 * @idx; index position for new node
 * @n: n value for new node
 *
 * Return: address of new node or null if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int count = 0;

	if (!h)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	temp = *h;

	while (count != idx)
	{
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
		count++;
	}
	newnode->next = temp;
	newnode->prev = temp->prev;

	temp->prev = newnode;

	temp = temp->prev->prev;
	temp->next = newnode;

	return (newnode);
}
