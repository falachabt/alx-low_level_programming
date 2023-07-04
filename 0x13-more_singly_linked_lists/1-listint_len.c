#include "lists.h"
/**
 * listint_len -  prints all the elements of a listint_t list.
 * @h: list
 *
 * Return: the number of node
 */
size_t listint_len(const listint_t *h)
{
	const struct listint_s *p = h;
	size_t count  = 0;

	while (p)
	{
		count++;
		p = p->next;
	}

	return (count);
}

