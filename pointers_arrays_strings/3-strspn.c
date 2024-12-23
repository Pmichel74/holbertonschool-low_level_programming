#include "main.h"
#include <stddef.h>

/**
* *_strspn - gets the length of a prefix substring
* @s: string to evaluate
* @accept: string containing the list of characters to match in s
*
* Return: the number of bytes in the initial segment
* of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	unsigned int j;

	int flag;

	if (s == NULL || accept == NULL)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
			{
				return (i);
			}
		}
		return (i);
}
