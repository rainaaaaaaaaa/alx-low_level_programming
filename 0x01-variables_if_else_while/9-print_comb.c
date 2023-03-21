#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always (back)
 */

int main(void)

{
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	{
	if (n != '9')
	putchar(',');
	putchar(' ');
	}
	putchar('\n');

	return (0);
}
