#include "main.h"
/* betty-style: off */

/**
 * main - Main execution loop for the simple shell program
 * @argc: Argument count (unused)
 * @argv: Argument vector
 * @envp: Array of environment variables
 *
 * Return: Always returns 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[], char *envp[])
{
	char *line = NULL;/*ligne de commande saisie par le user*/
	size_t len = 0;/*longeur de la ligne*/
	ssize_t nread;/*nombre d'octets lus*/
	char **args;/*tableau arguments de la commande*/
	int interactive = isatty(STDIN_FILENO);/*mode interactif ou non*/
	int exit_status;/*statut de sortie pour commande exit*/
	int last_status = 0;/*dernier statut de sortie de commande*/

	signal(SIGINT, sigint_handler);/*gestion du signal*/

	while (1)
	{
		if (interactive)
		{
			write(STDOUT_FILENO, "$ ", 2);/*affiche prompt en mode interactif*/
		}
		nread = custom_getline(&line, &len, stdin);/*lit une ligne de commande*/
		if (nread == -1)
		{
			if (interactive)
				write(STDOUT_FILENO, "\n", 1);/*nvlle ligne si EOF*/
			break;
		}

		if (nread > 0 && line[nread - 1] == '\n')
			line[nread - 1] = '\0';/*supprime retour a la ligne final*/

		if (strlen(line) == 0) /*ignore lignes vides*/
			continue;

		args = tokenize_command(line);/*appel fonction pour découper la commande en arguments*/
		if (!args || args[0] == NULL)
		{
			free_string_array(args);
			continue;
		}

		if (strcmp(args[0], "exit") == 0)
		{
			exit_status = exit_command(args, argv[0], last_status);

			free_string_array(args);/*appel fonction pour libérer le tableau de chaines*/
			free(line);
			exit(exit_status);
		}
		/* exécute la commande spécifiée par l'utilisateur et stocke le statut de sortie dans la variable*/
		last_status = execute_command(args, envp, argv[0]);/*appel fonction: recherche commandes dans path, gere commandes integrees
															crée processus fils pour commandes externes*/
		free_string_array(args);/* appel fonction pour libérer chaines de tableau */
	}

	free(line);
	return (last_status);
}
