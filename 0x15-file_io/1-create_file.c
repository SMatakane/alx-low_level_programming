#include "main.h"
/**
 * create_file - creates file
 * @filename: filename
 * @text_content: content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int o = 0;
	int len = 0;
	int w = 0;

	if (filename == NULL)
		return (-1);
	if (text_conetnt != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
