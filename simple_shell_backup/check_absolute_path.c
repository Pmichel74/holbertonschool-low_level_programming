#include "main.h"

/**
 * check_absolute_path - Checks if the command is an absolute or relative path
 * @command: Name of the command to check
 *
 * Return: The full path of the command if it exists, NULL otherwise
 */

char *check_absolute_path(char *command)
{
	struct stat buffer;/* structure systeme stat pour stocker infos du fichier  */

	if (command[0] == '/' || (command[0] == '.' && command[1] == '/'))
	{
		if (stat(command, &buffer) == 0)/* check si fichier existe et  stock info dans buffer */
			return (strdup(command));/* retourne la chaine dupliquée avec nom de commande */
	}
	return (NULL);
}
