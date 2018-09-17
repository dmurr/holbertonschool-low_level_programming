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
	unsigned int len, count = 0;

	if (!h)
		return (NULL);

	len = dlistint_len(*h);
	if (idx > len + 1)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	temp = *h;

	if (idx == 0 && *h)
	{
		newnode->next = temp;
		*h = newnode;
		return (newnode);
	}
	while (count != idx)
	{
		temp = temp->next;
		count++;
	}
	if (idx == len)
		return (add_dnodeint_end(h, n));
	if (*h)
	{
		newnode->next = temp;
		newnode->prev = temp->prev;
		temp->prev = newnode;
		temp = temp->prev->prev;
		temp->next = newnode;
	}
	return (newnode);
}
