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
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
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
	size_t i, nm = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < nm; i++)
		{
		if (head == list[i])
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free(list);
			return (nm);
		}
		}
		nm++;
		list = _r(list, nm, head);
		printf("-> [%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nm);
}
