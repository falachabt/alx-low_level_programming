#include "lists.h"

/**
 * get_nodeint_at_index - returns th node of a listint_t linked list
 * @h: head of linked list
 *
 * Return: pointer to  the given index, or NULL if it doesn't exist
 */
int  sum_listint(listint_t *h)
{
	listint_t *current = head;
	int count = 0;

	while (current != NULL)
	{
        	count += current->n;
        	current = current->next;
	}
    	return (count);
}
