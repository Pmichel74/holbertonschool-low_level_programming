#include "main.h"

/**
 * checks for alphabetic character
 * Return: 1 if c is a letter else return 0
 */
int _isalpha(int c)
{
	return ((c <= 'a' && c <= 'z') || (c <= 'A' && c <= 'Z'));
}
