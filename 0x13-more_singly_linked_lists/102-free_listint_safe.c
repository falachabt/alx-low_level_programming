#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *slow, *fast, *tmp;

    if (!h || !*h)
        return (0);

    slow = *h;
    fast = *h;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = *h;
            while (slow != fast)
            {
                tmp = slow;
                slow = slow->next;
                fast = fast->next;
                free(tmp);
                count++;
            }
            tmp = slow;
            slow = slow->next;
            free(tmp);
            count++;
            *h = NULL;
            return (count);
        }
    }

    while (*h)
    {
        tmp = (*h)->next;
        free(*h);
        *h = tmp;
        count++;
    }

    *h = NULL;

    return (count);
}
