#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if (h->n != NULL)
			elements++;
		h = h->next;
	}
	return (elements);
}
