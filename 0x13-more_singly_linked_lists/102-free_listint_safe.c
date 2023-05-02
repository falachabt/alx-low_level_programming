#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    int diff;
    listint_t *temp;

    if (!h || !(*h))
        return (count);

    while (*h)
    {
	    diff = *h - (*h)->next;
	    if (dif > 0)
	    {
		    temp = (*h)->next;
		    free(*h);
		    *h = temp;
		    count++;
	    }
	    else
	    {
		    free(*h);
		    *h = NULL;
		    count++;
		    break;
	    }
    }

    *h  = NULL;
    return (count);
}

