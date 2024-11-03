#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
    int i = 0;
    int result = 0;
    int sign = 1;

        while (s[i] != '\0')
        {
            i ++;

            if (s[i] == ' ')
            {
                i++;
            }
            else if (s[i] == '-' || s[i] == '+')
            {
                sign = sign + (s[i] == '-');
                i++;
            }
            for (; s[i] >= '0' && s[i] <= '9'; i++)
            {
                result = result * 10 + (s[i] - '0');
                i++;
            }
            return result * sign;
            return(0);
        }
}


