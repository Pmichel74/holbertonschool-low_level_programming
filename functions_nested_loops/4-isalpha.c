#include "main.h"

/**
 * checks for alphabetic character
 * c: the character to be checked
 * Return: 1 if c is a letter else return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
