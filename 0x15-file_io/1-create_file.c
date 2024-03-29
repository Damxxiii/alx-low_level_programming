#include "main.h"

/**
* create_file - Creates a file
* @filename: ptr to the name of the file to create
* @text_content: ptr to a string to write to the file
* Return: 1 on success Otherwise 1.
*/

int create_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file, text_content, len);

	if (file == -1 || w == -1)
		return (-1);

	close(file);
	return (1);

}
