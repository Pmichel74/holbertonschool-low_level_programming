#include <stdlib.h>
#include "main.h"

/**
* *_strdup - copies the string given as parameter
* @str: string to duplicate
*
* Return: pointer to the copied string (Success), NULL (Error)
*/
char *_strdup(char *str)
{
	char *dup;
	unsigned int length = 0;
	unsigned int i = 0;
	
	
	if (str == NULL)
	return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
	return(NULL);

	while (i < length)
	{
		dup[i] = str[i];
		i++;
	}
	
	return(dup);
}

