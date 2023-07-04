#include "lists.h"
#include <stdio.h>
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list
 *
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	const struct listint_s *p = h;
	size_t count  = 0;

	while (p)
	{
		printf("%d\n", p->n);
		count++;
		p = p->next;
	}

	return (count);
}

