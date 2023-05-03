#include "lists.h"

/**
 * _r - reallocates memory
 * 
 * @list: the old list.
 *
 * @size: size of the new list.
 *
 * @new: new node.
 *
 * Return: pointer to the new list.
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t n;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (n = 0; n < size - 1; n++)
		newlist[n] = list[n];
	newlist[n] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, count = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (n = 0; n < count; n++)
		{
		if (head == list[n])
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free(list);
			return (count);
		}
		}
		count++;
		list = _r(list, count, head);
		printf("-> [%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (count);
}
