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

	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	while (src[count_src] != '\0')
	{
		count_src++;
		dest[i] = src[i];
	}

	dest = '\0';
	return (dest);
}

