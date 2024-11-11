#include <stdio.h>
#include <stdlib.h>

/**
* main - adds two positive number
* @argc: number of arguments
* @argv: array of arguents
* atoi - converts a string to an integer
*
* Return: 0 (Success), or 1 (Error)
*
*/
int main(int argc, char *argv[])
{

	int i;

	int j;

	int num;

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)//vérifie que chaque argument est composé uniquement de chiffres.
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')//Si un caractère non numérique est trouvé, le programme affiche "Error" et se termine avec un code d'erreur
			{
			printf("Error\n");
			return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)//Cette boucle convertit chaque argument en entier avec atoi, et si le nombre est positif, l'ajoute à la somme totale.

		if (num > 0)
		{
			sum = sum + num;// sum += num; on peut ecrire comme ca c plus pro ! 
		}
	}
	printf("%d\n", sum);
	return (0);
}
