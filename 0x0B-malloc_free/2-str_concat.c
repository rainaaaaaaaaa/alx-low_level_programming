#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Write a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: return NULL on failure
 */

char *str_concat(char *s1, char *s2)

{
	int l = 0, m = 0, n = 0, o = 0;
	char *s;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[l])
	{
	l++;
	}
	while (s2[m])
	{
	m++;
	}
	o = l + m;
	s = malloc((sizeof(char) * o) + 1);
	if (s == NULL)
	return (NULL);

	m = 0;
	while (n < o)
	{
	if (n <= l)
	s[n] = s1[n];

	if (n >= l)
	{
	s[n] = s2[m];
	m++;
	}
	n++;
	}
	s[n] = '\0';
	return (s);
}
