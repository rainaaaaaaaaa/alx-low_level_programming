#include "main.h"

/**
 * main - prints the alphabet in lowercase
 * Return: Always (0)
 */

void print_alphabet(void)

{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
	_putchar(l);
	}
	_putchar('\n');

	return (0);
}
