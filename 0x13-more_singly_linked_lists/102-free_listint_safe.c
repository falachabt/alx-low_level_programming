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
    listint_t *current, *next;

    if (!h || !(*h))
        return (count);

    current = *h;
    while (current)
    {
        next = current->next;
        free(current);
        count++;

        /* Check if the next node has already been freed. */
        if (next && (next < current))
        {
            /* Set the next pointer of the previous node to NULL. */
            current->next = NULL;
            *h = NULL;
            exit(98);
        }

        current = next;
    }

    *h = NULL;
    return (count);
}

