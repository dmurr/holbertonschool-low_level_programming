#include "lists.h"

/**
 * list_len - find the number of elements
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;
	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
