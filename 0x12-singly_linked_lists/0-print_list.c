#include "lists.h"

/**
 * size_t print_list - Write a function that prints all the elements
 * of a list_t list.
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str != NULL)
            printf("[%u] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");

        h = h->next;
        count++;
    }

    return (count);
}
