#include "lists.h"

/**
 * print_listint_safe - Prints a l infinite loops
 *
 * @head: Pointer to the first node of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head, *fast_ptr = head;
	size_t count = 0;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		/* Check for loop */
		if (slow_ptr == fast_ptr)
		{
			printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			count++;
			break;
		}

		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;
	}

	if (!slow_ptr || !fast_ptr || !fast_ptr->next)
	{
		/* No loop found */
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
	}

	return (count);
}

