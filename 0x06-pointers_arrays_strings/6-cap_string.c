#include "main.h"
#include <ctype.h>

/**
 * *cap_string - capitalizes all words of a string
 * @str: the string
 * Return: nothing
 */

char *cap_string(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i == 0 || isspace(str[i - 1]))
	{
	str[i] = toupper(str[i]);
	}
	else
	{
	str[i] = tolower(str[i]);
	}
	i++;
	}
	return (str);
}
