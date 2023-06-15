#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	dilistint current;
	size_t n = 0;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
