#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)

{
	char l;
	int n = 1;

	while (n <= 10)
	{
	for (l = 'a'; l <= 'z'; l++)
	{
	_putchar(l);
	}
	_putchar('\n');
	n++;
	}
}
