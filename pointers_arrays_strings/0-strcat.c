#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 */
char *_strcat(char *dest, char *src)
{
	int count_dest = 0;
	int count_src = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		count_dest++;
		i++;
	}
	while (src[i] != '\0')
	{
		count_src++;
		i++;
		dest[i] = src[i];
	}

	dest = '\0';
	return (dest);
}

