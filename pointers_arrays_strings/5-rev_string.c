#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int j;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	j = i - 1;

	for (j = 0; j < i / 2; j++)
		{
			tmp = s[j];
			s[i] = s[j];
			s[j] = tmp;
		}
}