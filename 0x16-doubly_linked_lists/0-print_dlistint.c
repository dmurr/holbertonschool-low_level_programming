#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
