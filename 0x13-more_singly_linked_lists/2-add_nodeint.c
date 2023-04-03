#include "lists.h"

/**
 * add_nodeint- This one adds a new node at the beginning of a linked list
 * @head: This is a pointer to the first node in the list
 * @n:This represents data to insert in that new node
 *
 * Return: It Returns a pointer to the new node, or NULL incase of failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
