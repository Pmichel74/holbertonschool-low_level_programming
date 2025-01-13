#include "main.h"

/**
 * find_command - Searches for a command in PATH or as absolute/relative path
 * @command: Name of the command to search for
 * @envp: Array of environment variables
 *
 * Return: Full path of the command if found, NULL otherwise
 */
char *find_command(char *command, char *envp[])
{
	char *path;/* pointeur pour stocker la variable path */
	char *absolute_path;/* pointeur pour stocker chemin absolu de commande */

	if (!command)
		return (NULL);

	absolute_path = check_absolute_path(command);/* appel fonction: verifie si commande est un chemin absolu ou relatif */
	if (absolute_path)
		return (absolute_path);

	path = find_path(envp);/* Cherche la variable PATH dans l'environnement */
	if (!path)
		return (NULL);

	absolute_path = search_in_path(command, path);/* Cherche la commande dans les répertoires du PATH */

	if (!absolute_path)
		return (NULL);

	return (absolute_path);
}
