#include "main.h"

/**
 * remove_quotes - Remove quotes from a string
 * @str: String to process
 * Return: New string without quotes
 */
static char *remove_quotes(char *str)/* fonction statique qui retire guillemets d'une chaine */
{
	int len = strlen(str);/* longueur de la chaine */
	char *new_str = malloc(len + 1);/* alloue memoire pour nvlle chaine (+1 pour le \0) */
	int i, j = 0;

	if (!new_str)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != '"' && str[i] != '\\')/* Copie le caractère seulement s'il n'est ni guillemet ni backslash */
			new_str[j++] = str[i];
	}
	new_str[j] = '\0';/* ajoute caract nulle a la fin */

	return (new_str); /* ajoute nvlle chaine sans guillemets */
}

/**
 * tokenize_command - Split command line into tokens
 * @command: Command line to split
 *
 * Return: Array of tokens
 */
char **tokenize_command(char *command)
{
	char **tokens = malloc(MAX_ARGS * sizeof(char *));/* Alloue un tableau de pointeurs pour les tokens */
	char *token;
	int i = 0;
	char *processed;/* variable qui contient arguments "nettoyés" */

	if (!tokens)/* verifie si allocation a echoué */
		return (NULL);

	/* strtok:divise une chaine de caract en une sequence d'elements*/
	token = custom_strtok(command, " \t\n");/* \t\n" : Les délimiteurs utilisés pour séparer les tokens */
												/* espace , tabulation,retour ligne */

	/* Continue tant qu'il y a des tokens et qu'on n'a pas atteint la limite */
	while (token && i < MAX_ARGS - 1)/* -1 pour le NULL terminal */
	{
		processed = remove_quotes(token);/* Retire les guillemets du token */
		if (!processed)
		{
			while (--i >= 0)/* decremente i avant comparaison, exemple : i = 3 : --i = 2 : libère tokens[2] */
				free(tokens[i]);
			free(tokens);
			return (NULL);
		}
		tokens[i] = processed; /* stock le token traité */
		i++;
		token = custom_strtok(NULL, " \t\n");/* La fonction va :Reprendre l'analyse là où elle s'était arrêtée
											Chercher le prochain mot (token) en ignorant les délimiteurs
											Stocker ce mot dans la variable token */
	}
	tokens[i] = NULL;/* marque fin du tableau */

	return (tokens);/* retourne tableau de tokens "nettoyé" */
}
