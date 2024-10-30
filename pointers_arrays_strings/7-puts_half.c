#include "main.h"
/**
 *
 *
 */
void puts_half(char *str)
{
	int i;
	int length;
	int n;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n= (length - 1) / 2 + 1;
	}
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

	
