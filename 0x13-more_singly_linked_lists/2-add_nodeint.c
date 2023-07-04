#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint -  prints all the elements of a listint_t list.
 * @n: list
 * @head: the head of the list
 *
 * Return: the number of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

