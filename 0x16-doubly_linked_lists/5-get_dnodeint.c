#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: pointer to first node
 * @index: index of list to to retrieve node
 *
 * Return: value at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	temp = head;
	while (count != index)
	{
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
		count++;
	}
	return (temp);
}
