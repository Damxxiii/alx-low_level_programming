#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: ptr to the name of the file.
* @text_content: str to add to the end of the file.
*
* Return: 1 on success Otherwise -1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (!text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	w = write(file, text_content, len);

	if (file == -1 || w == -1)
		return (-1);

	close(file);
	return (1);

}
