#include "main.h"
/* betty-style: off */

/**
 * exit_command - Handles the exit command in the shell
 * @args: Array of command arguments
 * @program_name: Name of the shell program
 * @last_status: Last exit status of a command
 *
 * Return: The exit status to be used when exiting the shell
 */

int exit_command(char **args, char *program_name, int last_status)
{
	int exit_status = last_status;/*initialise statut de sortie avec le dernier statut*/
	int parsed_status;/*stock le statut parsé a partir de l'argument*/

	if (args[1] != NULL)/*check nom de la variable (ex:exit)*/
	{
		if (args[2] != NULL)/*check valeur de la var (ex: Pat)*/
		{
			fprintf(stderr, "%s: exit: too many arguments\n", program_name);
			return (1);
		}

		 /*  la conversion de l'argument en entier est essentielle pour la fonctionnalité,
		 la compatibilité et la conformité aux standards de la commande exit dans un shell.*/
		if (string_to_int(args[1], &parsed_status) == 0)
		{
			exit_status = parsed_status;
		}
		else
		{
			/*si la conversion échoue...*/
			fprintf(stderr, "%s: exit: Illegal number: %s\n", program_name, args[1]);
			exit_status = 2;/*2 est spécifique aux erreurs de syntaxe et utilisation */
		}
	}

	return (exit_status);
}
