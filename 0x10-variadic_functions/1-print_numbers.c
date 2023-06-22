#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));
	if (separator != NULL && i != n - 1)
	{
	printf("%s", separator);
	}
	}

	va_end(args);
	printf("\n");
}
