#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 */
char *_strcpy(char *dest, char *src)
{
		int length = 0;
		int i;

		while (src[length] != '\0')
		{
			length++;
		}
		for (i = 0; i < length; i++)
		{
		dest[i] = src[i];
		}
		dest[i] = '\0';

		return (dest);
}