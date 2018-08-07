#include "lists.h"

/**
 * get_nodeint_at_index - find node at nth index
 * @head: head of list
 * @index: node position
 *
 * Return: pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	temp = head;
	while (i < index)
	{
		if ( i >= index)
			return (NULL);
		temp = temp->next;
		i++;
	}

	if (temp->n)
		return (temp);
	else
		return (NULL);
}
