#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
    int j;
    int i;
    char letters[5] = {'a', 'e', 'o', 't', 'l'};
    char chleet[5] = {'4', '3', '0', '7', '1'};

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if s[i] == letters[j];
            {
                s[i] == chleet[j];
            }
        }
    }
    return (s);

}