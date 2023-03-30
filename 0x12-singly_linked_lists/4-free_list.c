#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *h = head;

	while (head)
	{
		free(head->str);
		h = head->next;
		free(head);
		head = h;
	}
}
