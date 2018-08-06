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

	while(h != NULL)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
