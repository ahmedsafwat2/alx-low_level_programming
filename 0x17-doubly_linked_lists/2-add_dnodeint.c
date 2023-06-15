#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @n: new integer to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *s;

	s = malloc(sizeof(dlistint_t));
	if (s == NULL)
		return (NULL);
	s->next = *head;
	s->prev = NULL;
	s->n = n;
	*head = s;
	return (*head);
}
