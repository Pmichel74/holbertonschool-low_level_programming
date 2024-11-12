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
unsigned int i = 0;
unsigned int j = 0;
unsigned int length1 = 0;
unsigned int length2 = 0;


if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

if (n < length2)
j = n;
else
j = length2;
s3 = malloc(sizeof(char) * (length1 + j + 1));
if (s3 == NULL)
return NULL;

while (i < length1)
i++;
s3[i] = s1[i];


while (i < length1 + j)
i++;
s3[i] = s2[i - length1];
s3[i] = '\0';

return (s3);
}
