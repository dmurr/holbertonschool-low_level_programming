#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - implementation of insertion sort algo on a linked list
 * @list: linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *hold;

	if (!list)
		return;

	temp = hold = (*list)->next;

	while (hold)
	{

		hold = hold->next;

		while (temp->prev && (temp->n < temp->prev->n))
		{

			if (temp->next)
				temp->next->prev = temp->prev;

			temp->prev->next = temp->next;

			temp->next = temp->prev;
			temp->prev = temp->prev->prev;

			temp->next->prev = temp;

			if (temp->prev)
				temp->prev->next = temp;
			else
				*list = temp;

			print_list(*list);
		}

		temp = hold;
	}
}
