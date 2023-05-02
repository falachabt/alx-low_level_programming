#include "lists.h"

/**
 * pop_listint - Deletes the head listint_t linked list, and returns
 * the head node’s data (n).
 * @head: Pointer to he head node of the linked list.
 *
 * Return: ode's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}

