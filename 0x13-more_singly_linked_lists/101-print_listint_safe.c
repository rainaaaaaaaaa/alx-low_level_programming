#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr, *next;

	curr = head;
	while (curr != NULL)
	{
		next = curr->next;
		count++;
		printf("[%p] %d\n", (void *) curr, curr->n);
		if (next >= curr)
		{
			printf("-> [%p] %d\n", (void *) next, next->n);
			exit(98);
		}
		curr = next;
	}

	return (count);
}
