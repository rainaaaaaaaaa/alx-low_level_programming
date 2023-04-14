#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: Empty
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	unsigned int i;
	char *nptr;

	if (new_size == old_size)
	{
	return (ptr);
	}
	if (ptr == NULL)
	{
	nptr = malloc(new_size);
	if (nptr == NULL)
	{
	return (NULL);
	}
	return (nptr);
	}
	else
	{
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
	nptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (nptr);
}
