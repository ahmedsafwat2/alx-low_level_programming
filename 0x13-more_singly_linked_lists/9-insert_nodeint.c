/*
 * File: 9-insert_nodeint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *s = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = s;
		*head = new;
		return (new);
	}
	for (i = 1; i < idx; i++)
	{
		if (s == NULL || s->next == NULL)
			return (NULL);
		s = s->next;
	}
	new->next = s->next;
	s->next = new;
	return (new);
}
