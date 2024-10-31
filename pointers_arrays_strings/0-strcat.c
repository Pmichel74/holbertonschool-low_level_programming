#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 */
char *_strcat(char *dest, char *src)
{
	int count_dest = 0
	int count_src = 0
	int i;

	while (count_dest[i] != '\0')
	{
		count_dest++;
	}
	while (count_src[i] != '\0')
	{
		count_src++;
		count_dest[i] = count_src[i];
	}

	count_dest = '\0';
	return (dest);
}

