#include <stdio.h>

/**
 * main - prints the alphabet in uppercase and then in lowercase
 * Return: Always (0)
 */

int main(void)

{
	char upp;

	for (upp = 'A'; upp <= 'Z'; upp++)
	putchar(upp);

	for (upp = 'a'; upp <= 'z'; upp++)
	putchar(upp);
	putchar('\n');

	return (0);
}
