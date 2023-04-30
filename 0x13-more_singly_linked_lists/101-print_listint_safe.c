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

	tortoise = hare = head;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			break;
		}

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}

	if (tortoise == NULL || hare == NULL || hare->next == NULL)
	{
		/* no loop */
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	else
	{
		/* loop detected */
		tortoise = head;
		while (tortoise != hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			tortoise = tortoise->next;
			hare = hare->next;
		}
		printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);

		do {
			tortoise = tortoise->next;
			count++;
		} while (tortoise != hare);

		printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
	}

	return (count);
}
