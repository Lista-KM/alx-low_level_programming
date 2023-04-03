#include "lists.h"

/**
 * free_listint- This frees a linked list
 * @head: It points to the listint_t to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;

		free(head);
		head = temp;
	}
}
