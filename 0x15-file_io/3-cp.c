#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fileD);

/**
 * create_buffer - Allocates bytes for a buffer.
 * @file: filename
 *
 * Return: ptr to buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Cannot write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fileD: file descriptor to be closed.
 */
void close_file(int fileD)
{
	int c;

	c = close(fileD);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fileD %d\n", fileD);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: arguments
 * @argv: array of ptrs to the arguments.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int to, from, w, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
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

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}



