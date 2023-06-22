#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Write a function that prints a name
 * @name: the name
 * @f: pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))

{
	if (name != NULL && f != NULL)
	f(name);
}
