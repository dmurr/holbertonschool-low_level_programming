#include "lists.h"

/**
 * sum_dlistint - finds sum of all node data values
 * @head: pointer to head of list
 *
 * Return: sum of node values
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (!head)
		return (sum);

	temp = head;
	while (temp->next)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;

	return (sum);
}
