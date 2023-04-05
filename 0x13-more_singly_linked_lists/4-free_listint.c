/*
 * File: 4-free_listint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *s = head;

	while (s)
	{
		free(head);
		s = s->next;
		head = s;
	}
}