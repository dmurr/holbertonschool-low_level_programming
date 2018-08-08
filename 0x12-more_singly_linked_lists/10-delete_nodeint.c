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
 * delete_nodeint_at_index - deletes node
 * @head: list
 * @index: node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev;
	unsigned int i = 0;

	temp = *head;
	while (i < index)
	{
		if (i == index - 1)
			prev = temp;
		temp = temp->next;
		i++;
	}

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else if (index < listint_len(*head))
	{
		prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
