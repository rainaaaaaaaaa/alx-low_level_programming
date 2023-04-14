#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/*Print an error message and exit with a status of 98*/
void error(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/*Parse a positive integer from a string*/
int parse_positive_integer(char *s)
{
	int value = 0;

	while (*s)
	{
	if (!isdigit(*s))
	{
	error("Invalid argument");
	}
	value = value * 10 + (*s - '0');
	s++;
	}
	return (value);
}

int main(int argc, char **argv)
{
	/*Check if the number of arguments is correct*/
	if (argc != 3)
	{
	error("Incorrect number of arguments");
	}

	/*Parse the two arguments as positive integers*/
	int num1 = parse_positive_integer(argv[1]);
	int num2 = parse_positive_integer(argv[2]);

	/*Multiply the two integers and print the result*/
	int result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
