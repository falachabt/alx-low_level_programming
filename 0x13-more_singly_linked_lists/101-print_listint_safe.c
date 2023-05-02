#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list, even if it contains a loop
 * @head: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *runner;
	size_t count;

	if (head == NULL)
		exit(98);

	current = head;
	count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current > current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next,
			       current->next->n);
			break;
		}

		runner = current->next;
		while (runner != NULL)
		{
			if (runner == current)
			{
				printf("-> [%p] %d\n", (void *)runner, runner->n);
				exit(98);
			}
			runner = runner->next;
		}

		current = current->next;
	}

	return (count);
}

