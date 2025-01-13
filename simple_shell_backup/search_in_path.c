#include "main.h"

/**
 * search_in_path - Searches for a command in the directories specified by PATH
 * @command: Name of the command to search for
 * @path: String containing the PATH value
 *
 * Return: The full path of the command if found, NULL otherwise
 */

char *search_in_path(char *command, char *path)
{
	char *path_copy, *path_token, *file_path;
	int command_length, directory_length;
	struct stat buffer;

	path_copy = strdup(path);
	if (!path_copy)
		return (NULL);

	command_length = strlen(command);/* nmbre de caractères de la commande */
	path_token = custom_strtok(path_copy, ":");/* ":" delimiteur de la chaine  */
	/* extrait le 1er token de path_Copy(repertoire)*/

	while (path_token != NULL)
	{
		directory_length = strlen(path_token);/* nmbre de token dans le nom du repertoire */
		file_path = malloc(command_length + directory_length + 2);/* alloue memoire pour chemin complet de la commande du fichier */
		if (!file_path)										/* +2 pour "/" et "char Null" de fin*/
		{
			free(path_copy);
			return (NULL);
		}

		strcpy(file_path, path_token);/* ex: /user/bin */
		strcat(file_path, "/");/* /user/bin/ */
		strcat(file_path, command);/* /user/bin/ls */

		/* check si fichier existe et est executable */
		if (stat(file_path, &buffer) == 0 && access(file_path, X_OK) == 0)
		{
			free(path_copy);
			return (file_path);/* return le chemin */
		}

		free(file_path);
		path_token = custom_strtok(NULL, ":");/* ici on passe au prochain token */
	}

	free(path_copy);
	return (NULL);
}
