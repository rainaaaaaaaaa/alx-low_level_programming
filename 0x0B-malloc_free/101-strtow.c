#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 *
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
	}

	return (count);
}

/**
 * free_words - Frees an array of words.
 *
 * @words: The array of words to free.
 * @count: The number of words in the array.
 */
void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(words[i]);

	free(words);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j, k = 0, len = 0, word_count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;

		for (j = k; str[j] && str[j] != ' '; j++)
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			free_words(words, i);
			return (NULL);
		}

		for (j = 0; str[k] && str[k] != ' '; j++, k++)
			words[i][j] = str[k];

		words[i][j] = '\0';
		len = 0;
	}

	words[i] = NULL;

	return (words);
}
