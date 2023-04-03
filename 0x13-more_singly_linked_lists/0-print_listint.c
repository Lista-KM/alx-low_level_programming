#include "lists.h"
#include <stdio.h>

/**
 * print_listint- This prints all the elements of a linked list.
 * @h: This is a pointer to the head of the list_t list.
 *
 * Return: The fuction returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
