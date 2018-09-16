#include "lists.h"

/**
 * add_dnodeint - adds node to beginning  of list
 * @head: pointer to head of list
 * @n: value of node
 *
 * Return: address of new node or null if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

        newnode->n = n;
        newnode->prev = NULL;
	newnode->next = *head;

	if (*head)
		(*head)->prev = newnode;

	*head = newnode;
	return (newnode);

}
