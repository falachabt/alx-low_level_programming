#include "lists.h"

/**
 * get_nodeint_at_index - returns th node of a listint_t linked list
 * @head: head of linked list
 * @index: index of the node to return, starting at 0
 *
 * Return: pointer to  the given index, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
    {
        if (count == index)
            return (current);
        count++;
        current = current->next;
    }
    return (NULL);
}

