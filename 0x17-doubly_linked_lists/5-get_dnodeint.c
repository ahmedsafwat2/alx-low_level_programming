#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *s = head;

	for (i = 0; i < index; i++)
	{
		if (s == NULL)
			return (NULL);
		s = s->next;
	}
	return (s);
}
