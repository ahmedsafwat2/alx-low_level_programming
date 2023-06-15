#include "lists.h"

/**
 * free_dlistint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *s = head;

	while (head)
	{
		s = head->next;
		free(head);
		head = s;
	}
}
