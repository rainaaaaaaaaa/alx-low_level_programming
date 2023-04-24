#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])

{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc < 2)
	{
	printf("Error: expected one argument (the amount of money in cents)\n");
	return (1);
	}
	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	printf("%d\n", coins);
	return (0);
}
