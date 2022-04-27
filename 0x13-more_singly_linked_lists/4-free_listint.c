#include "lists.h"

/**
 *free_listint - frees listint_t.
 *@head: Pointer to listint_t.
 *
 *Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
