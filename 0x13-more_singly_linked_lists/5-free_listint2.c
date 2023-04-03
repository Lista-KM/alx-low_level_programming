#include "lists.h"

/**
 * free_listint2 - This frees a linked lists too.
 * @head : This points to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
