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
	listint_t *slow, *fast, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;
	while (fast != NULL && fast < slow)
	{
		count++;
		temp = slow;
		slow = slow->next;
		free(temp);
		fast = fast->next;
		if (fast != NULL && fast < slow)
		{
			count++;
			temp = slow;
			slow = slow->next;
			free(temp);
			fast = fast->next;
		}
	}
	count++;
	temp = slow;
	slow = slow->next;
	free(temp);
	*h = NULL;

	return (count);
}
