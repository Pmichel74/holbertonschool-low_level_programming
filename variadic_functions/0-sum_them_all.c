#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	int sum = 0;

	if (n == 0)
	return (0);

	va_start(arg, n);

	for (i = o; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return sum;
}