#include "lists.h"

/**
 * sum_listint - It calculates the sum of all the data in a listint_t list
 * @head: Points to the first node in the linked list
 *
 * Return: This function returns the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listsint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
