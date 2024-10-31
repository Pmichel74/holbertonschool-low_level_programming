#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: return value in wich the string is copied
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
		src[i] = dest[i];
		}
		dest[i] = '\0';
		
		return (dest);
}
