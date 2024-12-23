#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails NULL.
 * Otherwise a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *ptr;
	unsigned int i;

	if (nmemb == 0)
	return (NULL);
	if (size == 0)
	return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
	return (NULL);

	ptr = memory;

	for (i = 0; i < (size * nmemb); i++)
	ptr[i] = '\0';

	return (memory);

}
