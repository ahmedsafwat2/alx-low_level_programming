/*
 * File: 7-get_nodeint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *s = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (s == NULL)
			return (NULL);
		s = s->next;
	}
	return (s);
}