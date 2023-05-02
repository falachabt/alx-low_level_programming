#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *slow, *fast, *tmp;

    if (h == NULL || *h == NULL)
        return (0);

    slow = *h;
    fast = (*h)->next;

    while (slow != NULL)
    {
        count++;
        tmp = slow;
        slow = slow->next;
        free(tmp);

        if (slow == fast) /* loop detected */
            break;

        if (fast != NULL && fast->next != NULL)
            fast = fast->next->next;
        else
            fast = NULL;
    }

    *h = NULL;
    return (count);
}
