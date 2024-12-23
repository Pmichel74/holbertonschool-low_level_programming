#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	if (n == 0) // equivalent if (!n)
	return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int); // ou sum = sum + va_arg(arg, int);
	}

	va_end(arg);

	return (sum);
}
