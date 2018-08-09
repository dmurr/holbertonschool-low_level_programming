#include "lists.h"

/**
 * free_listint2 - frees list from double pointer
 * @head: points to list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!*head || !head)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
