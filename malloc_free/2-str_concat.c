#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0;
	int j = 0;
	int length1 = 0;
	int length2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[length1] != '\0')
	length1++;
	while (s2[length2] != '\0')
	length2++;

	s3 = malloc(sizeof(char) * (length1 + length2 + 1)); // autre facon de l'ecrire: s3 = malloc(sizeof(*s3) * (len1 + len2 + 1));
	if (s3 == NULL)
	return (NULL);

	while (i < length1)
	{
	s3[i] = s1[i];
	i++;
	}

	while (j < length2)
	{
	s3[i] = s2[j];
	i++;
	j++;
	}

	s3[i] = '\0';

	return (s3);

	free(s3);
}


