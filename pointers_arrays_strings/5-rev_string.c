#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int length;
	int length1;
	int i;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	
	length1 = length - 1;

		for (i = 0; i < length / 2; i++)
		{
			tmp = s[i];
			s[length] = s[length1];
			s[length1--] = tmp;
		}
}
