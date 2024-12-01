#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of types of arguments
*/
void print_all(const char * const format, ...) // fonction variadique
{
char *str = ""; // les guillemets obligatoires car pointe vers une chaine de caractere vide (sinon c un pointeur non initialisé)
char *separator = "";
int i = 0;

va_list args;

va_start(args, format); // initialisation liste des arguments

while (format && format[i]) // equivalent à while (format != NULL && format[i] != NULL)
{

	switch (format[i]) // evite 4 conditions avec if
	{
		case 'c':
		printf("%s%c", separator, va_arg(args, int)); // va_arg pour recuperer l'argument
		break;
		case 'i':
		printf("%s%d", separator, va_arg(args, int)); // %s%d pour separator(, ) et decimal
		break;
		case 'f':
		printf("%s%f", separator, va_arg(args, double)); // "double" attend un argument de type double (ex:3.14159265358979323846)
		break;
		case 's':
		printf("%s%s", separator, va_arg(args, char *)); // char* pointeur ici pour traiter chaine de caractere de longueur variable

		if (str == NULL)
		printf("(nil)");

		break;

		default:
		i++;
		continue; // permet de sauter reste du corps de la boucle et de passer directement a la prochaine iteration

	}
separator = ", ";
i++;
}

printf("\n");
va_end(args);
}
