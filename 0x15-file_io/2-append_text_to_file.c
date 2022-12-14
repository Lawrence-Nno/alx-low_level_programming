#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: Name of the file to append
 * @text_content: The NULL terminated string to add
 * Return: Returns 1 on success and -1 on failure or if filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
