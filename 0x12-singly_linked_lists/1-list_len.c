#include "lists.h"

/**
 * list_len - return the len of a list
 *
 * @h: the list to give the length
 *
 * Return: the len of the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
