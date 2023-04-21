#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: input
 */

void print_all(const char * const format, ...)

{
	va_list args;
	char *str;
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(args, int));
		break;
	case 'i':
		printf("%d", va_arg(args, int));
		break;
	case 'f':
		printf("%f", va_arg(args, double));
		break;
	case 's':
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		break;
	default:
	break;
	}
	if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
	format[i] == 'f' || format[i] == 's'))
	printf(", ");
	i++;
	}
	printf("\n");
	va_end(args);
}
