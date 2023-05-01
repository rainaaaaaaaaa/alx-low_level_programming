#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - A helper function that recursively checks if a string
 * is a palindrome.
 *
 * @s: The string to check.
 * @left: The left index to check.
 * @right: The right index to check.
 *
 * Return: 1 if s is a palindrome, otherwise 0.
 */
int is_palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
		return (1);

	if (s[left] != s[right])
		return (0);

	return (is_palindrome_helper(s, left + 1, right - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome using recursion.
 *
 * @s: The string to check.
 *
 * Return: 1 if s is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);

	return (is_palindrome_helper(s, 0, len - 1));
}
