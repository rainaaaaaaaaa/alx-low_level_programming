#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[c])
		c++;
	if (n >= c)
		d = a + c;
	else
		d = a + n;

	s = malloc(sizeof(char) * d + 1);
	if (s == NULL)
		return (NULL);

	c = 0;
	while (b < d)
	{
	if (b <= a)
		s[b] = s1[b];
	if (b >= a)
	{
		s[b] = s2[c];
		c++;
	}
	b++;
	}
	s[b] = '\0';
	return (s);
}
