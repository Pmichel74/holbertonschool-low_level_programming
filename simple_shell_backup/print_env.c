#include "main.h"

/**
 * print_env - A function that prints all enviromental variables.
 * @env: The pointer to enviromental variables.
 * Return: Nothing.
 */
void print_env(char **env)
{
	size_t i = 0, len = 0;

	while (env[i])
	{
		len = strlen(env[i]);/*calcul longueur variable d'env courante*/
		write(STDOUT_FILENO, env[i], len);/* ecrit variable env sur sortie standard */
		write(STDOUT_FILENO, "\n", 1);/* ecrit retour a la ligne */
		i++;/* passe a la ligne suivante */
	}
}
