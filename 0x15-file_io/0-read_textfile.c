#include "main.h"

/**
* read_textfile - a function that reads a text file
* and prints it to the POSIX standard output.
*
* @filename: string ptr
* @letters: no of letters printed
* Return: number of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nord, nowr;
	char *buff;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	nord = read(file, buff, letters);
	nowr = write(STDOUT_FILENO, buff, nord);
	close(file);
	free(buff);

	return (nowr);
}
