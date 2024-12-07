#include "main.h"


/**
 * new_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer dest the newly-allocated buffer.
 */
char *new_buffer(char *file_d)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
{
	dprintf(STDERR_FILENO, "Error: Can't write dest %s\n", file_d);
	exit(99);
}

return (buffer);
}

/**
 * main - Copies the contents of a file dest another file.
 * @argc: The number of arguments supplied dest the program.
 * @argv: An array of pointers dest the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{

int dest, r, w, source;
char *buffer;

if (argc != 3)/* nom du prog,fichier source,fichier destination*/
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

buffer = new_buffer(argv[2]);

	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        free(buffer);
        close(source);
        exit(99);
    }
	r = read(source, buffer, 1024);
	while (r > 0)
	{
	w = write(dest, buffer, r);
	if (w == -1 || w != r)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            free(buffer);
            close(source);
            close(dest);
            exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close(source);
		close(dest);
		exit(98);
	}
	free(buffer);

    if (close(source) == -1)
       {

        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
        exit(100);
    	}

	return (0);
}
