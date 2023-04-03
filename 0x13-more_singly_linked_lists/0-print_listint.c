#include "lists.h"

/**
* print_listint - prints all the elements of a linked list
* @h: linked list of type listint_t to print
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	listint_t *s = head;
	size_t i = 0;

	while (s != NULL)
	{
		printf("%i\n", s->n);
		i++;
		s = s->next;
	}
	return (i);
}
