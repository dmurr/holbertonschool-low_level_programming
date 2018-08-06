#include "lists.h"

/**
 * print_listint - print linked list
 * @h: head of list
 *
 * Return: list size
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);

}
