#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: thehere the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head->next;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		if (slow == fast) /* loop detected */{
			slow = head; /* reset slow to head */
			fast = fast->next; /* advance fast by one */

			while (slow != fast) /* find the start of the loop */
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow); /* return the address of the node */
		}

		slow = slow->next; /* advance slow by one */
		fast = fast->next->next; /* advance fast by two */
	}

	return (NULL); /* no loop found */
}
