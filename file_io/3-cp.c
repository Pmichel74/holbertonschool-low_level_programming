#include "main.h"


/**
 * new_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *new_buffer(char *file_d)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);


if (!buffer)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_d);
	exit(99);
}

return (buffer);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{

int to, r, w, source;
char *buffer;

if (argc != 3)/* nom du prog,fichier source,fichier destination*/
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

buffer = new_buffer(argv[2]);
source = open(argv[1], O_RDONLY);
r = read(source, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

while (r > 0)
{
	if (source == -1 || r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	else
	w = write(to, buffer, r);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
	}
	else
	{
		r = read(source, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
}

free(buffer);
close(source);
close(to);

return (0);
}
