#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *)) /* a function which takes 2 parameters char *name et void (*f)(char *) */
											   /* void (*f)(char *) pointeur to fonction with an argument of type char * */
											   /* void return no value*/
{
	if (name == NULL || f == NULL)
	return;
	f = name;
}

