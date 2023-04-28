#include "main.h"
#include <stdio.h>

/**
 * print_list - print a list a return the number of node
 *
 * @h: the list to run theow
 *
 * Return: the number of node 
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			elements += 1;
			continue;
		}
		printf("[%d] %s", h->len, h-str);
		elements += 1;
		h = h->next;
	}

	return (elements);
}




