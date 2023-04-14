#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: the size
 * Return: Empty
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	int m = 0, n = 0;
	char *s;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	n = nmemb * size;
	s = malloc(n);
	if (s == NULL)
	{
	return (NULL);
	}
	while (m < n)
	{
	s[m] = 0;
	m++;
	}
	return (s);
}
