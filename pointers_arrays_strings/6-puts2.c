#include "main.h"
/**
 *
 *
 */
void puts2(char *str)
{
	int i;
	int length;

	for (length = 0; str[length] < '\0'; length++)
	{
	}
	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
}
