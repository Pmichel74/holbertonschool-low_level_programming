#include "main.h"

char *create_buffer(char *file);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_fd - Function to close a file descriptor
 * @fd: The file descriptor to be closed.
 *
 * Return : -1 on failure (errno is set to indicate the error)
 */
void close_fd(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);/* buffer pour stocker temp données fichier source*/
	from = open(argv[1], O_RDONLY);/*ouvre fichier source*/
	r = read(from, buffer, 1024);/*lit fichier source dans buffer*/
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);/*crée le fichier de destination*/
											/* trunck taille fichier a 0 s'il existe*/
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		/* lit jusqu'a 1024 octets*/
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
		/*ouvre fichier destination en mode ajout"*/
	} while (r > 0);

	free(buffer);
	close_fd(from);
	close_fd(to);

	return (0);
}
