#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: pointer to doubly linked list
 * @idx: index position for new node
 * @n: n value for new node
 *
 * Return: address of new node or null if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int len;

	if (!h)
		return (NULL);

	len = dlistint_len(*h);
	if (idx > len)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	temp = *h;

	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else if (idx == len)
		newnode = add_dnodeint_end(h, n);
	else
	{
		while (temp->next)
			temp = temp->next;

		newnode->next = temp;
		newnode->prev = temp->prev;
		temp->prev = newnode;
		temp = temp->prev->prev;
		temp->next = newnode;
	}
	return (newnode);
}
