#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - prints strings
* @separator: separator between strings
* @n: number of arguments passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (separator == NULL)
		printf("%s", str);
		else if (separator == 0 && i == 0)
		printf("%s%s", separator, str);

		if (str == NULL)
		printf("(nil)");
		else
		printf("%s", str);
	}
		va_end(args);
		printf("\n");
}
