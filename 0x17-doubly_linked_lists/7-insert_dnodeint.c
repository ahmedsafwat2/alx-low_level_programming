#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @h: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *s = *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = s;
		*h = new;
		return (new);
	}
	for (i = 1; i < idx; i++)
	{
		if (s == NULL || s->next == NULL)
			return (NULL);
		s = s->next;
	}
	new->prev = s;
	new->next = s->next;
	s->next->prev = new;
	s->next = new;
	return (new);
}
