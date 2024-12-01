#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"


int _printf(const char *format, ...)
{
	int count = 0;
	int num = 0;

	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				num = va_arg(args, int);

				count += (num);
			}
			else
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	va_end(args);
	return (count);
}
