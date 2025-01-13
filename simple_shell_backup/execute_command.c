#include "main.h"

/**
 * execute_command - Execute a command
 * @args: Command arguments
 * @envp: Environment variables
 * @program_name: Program name
 *
 * Return: Status of command execution
 */
/* betty-style: off */
int execute_command(char **args, char **envp, char *program_name)
{

	char *command_path = NULL;/*pour vérifier statut et permissions d'un fichier*/
	struct stat st;/*structure système utilisée pour stocker les informations sur les fichiers
					stock le code de retour de l'execution de la commande*/
	int result;

	if (!args || !args[0])
		return (-1);

	if (strcmp(args[0], "env") == 0)/*si "env" execute fonction affichage variables d'environnement*/
	{
		print_env(envp);/*appel fonction*/
		return (0);
	}
	if (strcmp(args[0], "setenv") == 0)/* si commande setenv,execute fonction pour definir une var d'environnement */
		return (_setenv(args, envp, program_name));/* _setenv: fonction pour definir ou modifier une variable d'env  */
	if (strcmp(args[0], "unsetenv") == 0)/* si unsetenv, execute fonction pour supprimer une var d'environnement*/
		return (_unsetenv(args, envp, program_name));/* _unsetenv: fonction pour supprimer une variable d'env  */

	if (args[0][0] == '/' || args[0][0] == '.')/* check si chemin absolu ou relatif */
	{
		/* &st: on passe l'adresse de la structure a la fonction stat */
		if (stat(args[0], &st) == 0 && (st.st_mode & S_IXUSR))/* check si appel syst stat ok + Vérifie si le bit d'exécution
		pour l'utilisateur est activé dans les permissions du fichier.*/
			command_path = strdup(args[0]);/*duplique le chemin de la commande*/
		else
		{
			fprintf(stderr, "%s: 1: %s: not found\n", program_name, args[0]);
			return (127);
		}
	}
	else
	{
		command_path = find_command(args[0], envp);/* dans la variable -> appel fonction pour chercher commande dans le path */
		if (!command_path)
		{
			fprintf(stderr, "%s: 1: %s: not found\n", program_name, args[0]);/*stderr standard error*/
			return (127);
		}
	}

	result = fork_and_execute(command_path, args, envp, program_name);/* permet l'exécution sécurisée de commandes externes
																		sans quitter le shell*/
	free(command_path);
	return (result);
}
