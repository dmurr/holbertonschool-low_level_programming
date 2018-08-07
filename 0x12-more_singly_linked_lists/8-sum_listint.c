#include "lists.h"

/**
 * sum_listint - finds sum of all data
 * @head: beginning of list
 *
 * Return: sum or zero if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (!head)
		return (0);

	temp = head;
	while (temp->next)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
