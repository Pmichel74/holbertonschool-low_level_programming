#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int length = n;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;

	s3 = malloc(sizeof(char) * (length + 1));

	if (s3 == NULL)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
		s3[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		s3[length++] = s2[i];

	s3[length] = '\0';

	return (s3);
}
