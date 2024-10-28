#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int digit;
	int count;

	for (count = 0;  < 10; count++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (count >= 10)
			{
				_putchar('1');
				_putchar((count % 10) + '0');
			}						
		}
_putchar('\n');
	}
}
