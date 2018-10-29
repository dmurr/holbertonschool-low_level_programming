#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include "sort.h"

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_list(const listint_t *list);
void print_array(int *array, int size);

void bubble_sort(int *array, size_t size);
void swap(int *p1, int *p2);


#endif /* SORT_H */
