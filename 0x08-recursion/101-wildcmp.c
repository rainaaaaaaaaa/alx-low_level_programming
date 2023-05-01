#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered
 * identical, otherwise 0. The second string can contain the special
 * character *
 * which can replace any string (including an empty string).
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if s1 and s2 are identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
