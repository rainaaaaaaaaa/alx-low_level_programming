#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	tortoise = head;
	hare = head->next;

	while (hare != NULL && hare < hare->next)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next->next;
		count++;
	}

	printf("[%p] %d\n", (void *)tortoise, tortoise->n);
	count++;

	if (hare != NULL)
	{
		printf("-> [%p] %d\n", (void *)hare, hare->n);
		count++;
	}

	return (count);
}
