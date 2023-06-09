#include "main.h"

/**
 * _strcmp - Write a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: -15 if s1 < s2, 15 if s1 > s2, 0 if otherwise
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
