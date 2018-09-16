#include "lists.h"

/**
 * add_dnodeint - adds node to beginning  of list
 * @head: list
 * @n: node value
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

        newnode->n = n;
        newnode->prev = NULL;

	if (head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		return (newnode);
	}

	newnode->next = *head;
	*head = newnode;
	return (newnode);

}
