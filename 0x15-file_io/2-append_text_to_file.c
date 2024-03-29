#include "main.h"
/**
 * append_text_to_file - appends to file
 * @filename: filename
 * @text_content: content
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o = 0;
	int r = 0;
	int w = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(0, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
