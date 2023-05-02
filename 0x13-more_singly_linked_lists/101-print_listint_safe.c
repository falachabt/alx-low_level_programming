#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list, handling loops
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    if (!head)
        exit(98);

    slow = head;
    fast = head;

    while (fast && fast->next)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            count++;

            /* Break the loop by moving the slow pointer back to the head */
            slow = head;

            while (slow != fast)
            {
                printf("[%p] %d\n", (void *)slow, slow->n);
                count++;
                slow = slow->next;
                fast = fast->next;
            }

            printf("-> [%p] %d\n", (void *)slow, slow->n);
            return (count);
        }
    }

    /* Print the remaining nodes */
    while (slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
    }

    return (count);
}

