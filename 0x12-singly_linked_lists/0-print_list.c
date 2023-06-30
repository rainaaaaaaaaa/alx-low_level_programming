#include <stddef.h>  // for size_t
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str != NULL)
        {
            print_string(h->str);
            print_char('\n');
        }
        else
        {
            print_string("[0] (nil)");
            print_char('\n');
        }

        h = h->next;
        count++;
    }

    return count;
}

/**
 * print_string - Prints a string.
 * @str: The string to print.
 */
void print_string(const char *str)
{
    size_t i = 0;

    while (str[i] != '\0')
    {
        print_char(str[i]);
        i++;
    }
}

/**
 * print_char - Prints a character.
 * @c: The character to print.
 */
void print_char(char c)
{
    write(1, &c, 1);
}

