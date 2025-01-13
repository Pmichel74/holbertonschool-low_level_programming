#include "main.h"

/**
 * string_to_int - Converts a string representation to an integer
 * @str: Input string to be converted
 * @result: Pointer to store the converted integer
 *
 * Description: Safely converts a string to an integer with robust error handling
 * - Supports positive and negative numbers
 * - Validates each character is a valid digit
 * - Prevents integer overflow
 *
 * Return: 0 on successful conversion, -1 on conversion failure
 */

int string_to_int(const char *str, int *result)
{
	int num = 0;
	int sign = 1;
	const char *ptr = str;

	/* Ignore leading spaces and tabs */
	while (*ptr == ' ' || *ptr == '\t')
		ptr++;

	/* Check if the string is empty or contains no digits */
	if (*ptr == '\0')
	{
		fprintf(stderr, "Error: Empty string or no digits found\n");
		return (-1);
	}

	/* Handle optional sign */
	if (*ptr == '-' || *ptr == '+')
	{
		sign = (*ptr == '-') ? -1 : 1;
		ptr++;
	}

	/* Check if the string ends after the sign */
	if (*ptr == '\0')
	{
		fprintf(stderr, "Error: No digits after sign\n");
		return (-1);
	}

	/* Convert each digit to integer, &check for overflow/underflow */
	while (*ptr)
	{
		if (*ptr < '0' || *ptr > '9')
		{
			fprintf(stderr, "Error: Invalid character '%c' in input\n", *ptr);
			return (-1);
		}

		/* Check for overflow (INT_MAX) or underflow (INT_MIN) */
		if (sign == 1 && (num > 214748364 || (num == 214748364 && (*ptr - '0') > 7)))
		{
			fprintf(stderr, "Error: Integer overflow\n");
			return (-1);
		}
		if (sign == -1 && (num > 214748364 || (num == 214748364 && (*ptr - '0') > 8)))
		{
			fprintf(stderr, "Error: Integer underflow\n");
			return (-1);
		}

		num = num * 10 + (*ptr - '0');  /* Convert char to digit and add to num */
		ptr++;
	}

	*result = num * sign;
	return (0);
}
