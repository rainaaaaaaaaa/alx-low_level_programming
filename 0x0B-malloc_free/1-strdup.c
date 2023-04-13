#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string
 * Return: a pointer to the duplicated string,
 * it returns NULL if insufficient memory was available, NULL if str = NULL
 */

char *_strdup(char *str)

{
	int a = 0, n = 1;
	char *s;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[n])
	{
	n++;
	}
	s = malloc((sizeof(char) * n) + 1);

	if (s == NULL)
	{
	return (NULL);
	}
	while (a < n)
	{
	s[a] = str[a];
	a++;
	}

	s[a] = '\0';
	return (s);
}
