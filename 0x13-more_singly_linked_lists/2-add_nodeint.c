#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning of a list.
 *@head: A pointer to the head of the structure listint_t list.
 *@n: integer.
 *
 *Return: If the function fails - NULL.
 *        Otherwise - Address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newptr;

	newptr = malloc(sizeof(listint_t));
	if (newptr == NULL)
		return (NULL);

	newptr->n = n;
	newptr->next = *head;

	*head = newptr;
	return (newptr);
}