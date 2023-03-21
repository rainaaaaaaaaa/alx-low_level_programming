#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always (back)
 */

int main(void)

{
	int n;
	char let;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (let = 'a'; let <= 'f'; let++)
	putchar(let);
	putchar('\n');

	return (0);
}
