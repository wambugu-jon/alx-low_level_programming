#include "lists.h"
#include <stdio.h>

/**
 *print_listint - Prints all elements of a listint_t list.
 *@h: Pointer to the structure listint_t.
 *
 *Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);

		nodes++;

		h = h->next;
	}
	return (nodes);
}