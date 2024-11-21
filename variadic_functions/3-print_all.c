#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of types of arguments
*/
void print_all(const char * const format, ...)
{
char *str = "";

char *separator = "";
int i = 0;

va_list args;

va_start(args, format);

while (format && format[i])
{

	switch (format[i])
	{
		case 'c':
		printf("%s%c", separator, va_arg(args, int));
		break;
		case 'i':
		printf("%s%d", separator, va_arg(args, int));
		break;
		case 'f':
		printf("%s%f", separator, va_arg(args, double));
		break;
		case 's':

		printf("%s%s", separator, va_arg(args, char *));
		if (str == NULL)
		printf("(nil)");

	break;
		default:
		i++;
		continue;
	}
separator = ", ";
i++;
}

printf("\n");
va_end(args);
}




