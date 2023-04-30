#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to pointer to the head node.
 *
 * Return: the size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *current;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		if (current <= current->next)
		{
			*h = NULL;
			free(current);
			break;
		}
		temp = current;
		current = current->next;
		free(temp);
	}

	return (count);
}
