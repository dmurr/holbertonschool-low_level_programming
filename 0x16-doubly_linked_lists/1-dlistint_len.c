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

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
