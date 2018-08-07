#include "lists.h"

/**
 * pop_listint -
 * @head: pointer to head of list
 *
 * Return: head nodes data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	temp = *head;

	if (!temp)
		return (0);

	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
