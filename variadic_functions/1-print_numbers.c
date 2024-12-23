#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!separator) // if (separator == NULL)
		printf("%d", va_arg(args, int));
		else if (separator && i == 0)
		printf("%d", va_arg(args, int)); // plus simple avec if (separator == NULL && i < n - 1)
		else
		printf("%s%d", separator, va_arg(args, int));
	}

	va_end(args);
	printf("\n");
}
