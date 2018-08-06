#include "lists.h"

/**
 * add_nodeint_end - add node to end of linked list
 * @head: head of list
 * @n: integer value
 *
 * Return: pointer to last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = node;

	return (node);
}
