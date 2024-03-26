#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurrence of the character c,
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)

{
	int p;

	for (p = 0; s[p] >= '\0'; p++)
	{
	if (s[p] == c)
	return (s + p);
	}
	return (NULL);
}
