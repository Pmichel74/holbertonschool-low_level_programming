#include "main.h"

/**
 * _setenv - Set or modify an environment variable
 * @args: Command arguments (args[1] = variable name, args[2] = value)
 * @envp: Environment var array
 * @program_name: Shell name for error messages
 *
 * Return: 0 on success, 1 on error
 */
int _setenv(char **args, char **envp, char *program_name)
{
	int i;
	char *new_env;

	if (!args[1] || !args[2])
	{
		fprintf(stderr, "%s: setenv: wrong number of arguments\n", program_name);
		return (1);
	}

	for (i = 0; envp[i]; i++)
	/* compare début de envp[i] avec args,retourne 0 si identiques
	 ex: compare "USER" avec "USER="*/
		if (strncmp(envp[i], args[1], strlen(args[1])) == 0 &&
			envp[i][strlen(args[1])] == '=')
			break;

	/* alloue espace mémoire nécessaire pour nvlle variable d'environnement. */
	/* +2 pour '=' et '\0' */
	new_env = malloc(strlen(args[1]) + strlen(args[2]) + 2);
	if (!new_env)
	{
		fprintf(stderr, "%s: setenv: out of memory\n", program_name);
		return (1);
	}

	strcpy(new_env, args[1]);
	strcat(new_env, "=");
	strcat(new_env, args[2]);

	if (envp[i])
		free(envp[i]);
	envp[i] = new_env;
	if (!envp[i + 1])
		envp[i + 1] = NULL;

	return (0);
}

/**
 * _unsetenv - Unset environment variable
 * @args: Command arguments (args[1] = variable to unset)
 * @envp: Environment array
 * @program_name: Shell name for error messages
 *
 * Return: 0 on success, 1 on error
 */
int _unsetenv(char **args, char **envp, char *program_name)
{
	int i, j;

	if (!args[1])
	{
		fprintf(stderr, "%s: unsetenv: too few arguments\n", program_name);
		return (1);
	}

	for (i = 0; envp[i]; i++)/* Parcourt l'environnement */
	{
		/* compare début de envp[i] avec args,retourne 0 si identiques
	 ex: compare "USER" avec "USER=john"*/
		if (strncmp(envp[i], args[1], strlen(args[1])) == 0 &&
			envp[i][strlen(args[1])] == '=')
		{
			free(envp[i]);
			/*Décale toutes les variables suivantes pour éviter les trous*/
			for (j = i; envp[j]; j++)
				envp[j] = envp[j + 1];
			return (0);
		}
	}

	fprintf(stderr, "%s: unsetenv: %s not found\n", program_name, args[1]);
	return (1);
}
