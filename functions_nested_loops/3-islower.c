#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to be checked (as an integer)
 * Return: 1 if is lowercase, 0 if is different
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
