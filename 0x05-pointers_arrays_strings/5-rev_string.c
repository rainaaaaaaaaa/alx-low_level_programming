#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 */

void rev_string(char *s)

{
	int len = 0, i = 0, j = 0;
	char tmp;
	
	while (s[len] != '\0')
	{
	len++;
	}
	j = len - 1;
	while (i < j)
	{
	tmp = s[i];
	s[i] = s[j];
	s[j] = tmp;
	i++;
	j--;
	}
}
