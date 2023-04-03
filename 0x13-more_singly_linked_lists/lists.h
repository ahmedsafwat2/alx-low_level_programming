#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Description: singly linked list node structure
* for alx project
*/
typedef struct list_h
{
	int n;
	struct list_h *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
