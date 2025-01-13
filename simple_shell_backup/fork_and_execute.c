#include "main.h"

/**
 * fork_and_execute - Forks a new process and executes a command
 * @command_path: Full path to the command to be executed
 * @args: NULL-terminated array of command arguments
 * @envp: Array of environment variables
 * @program_name: Name of the program (usually argv[0])
 *
 * Return: 0 on success, 127 if the command is not found, -1 on other failures
 */

int fork_and_execute(char *command_path, char **args,
char **envp, char *program_name)
{
	pid_t pid;/* declaration de variable en C pour stocker un ID de processus */
	int status;/* stock le statut de sortie de processus */

	if (access(command_path, X_OK) == -1)/* verifie accessibilité et  executabilité de la commande*/
	{
		fprintf(stderr, "%s: 1: %s: not found\n", program_name, args[0]);
		return (127);/* code erreur standart pour commande non trouvée */
	}

	pid = fork();
	if (pid == -1)
	{
		perror("Error: fork failed");
		return (-1);
	}
	else if (pid == 0)
	{
		if (execve(command_path, args, envp) == -1)/* execute un nouveau prog en remplacant processus présent */
		{
			perror("Error: execve failed");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (wait(&status) == -1)/* attend fin processus enfant et l'adresse de statut de sortie */
		{
			perror("Error: wait failed");
			return (-1);
		}
		if (WIFEXITED(status))/* verifie si processus enfant s'est bien terminé */
		{
			return (WEXITSTATUS(status));/* on retourne code de sortie du processus enfant */
		}
	}
	return (-1); /* -1 si aucun autre chemin a été emprunté */
}
