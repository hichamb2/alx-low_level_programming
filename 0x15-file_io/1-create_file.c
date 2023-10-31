#include "main.h"
/**
 * create_file -creates an array of chars, and initializes
 *
 * @text_content: is a NULL str
 * @filename: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int lengh, o, w;

	lengh = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (lengh = 0; text_content[lengh];)
			lengh++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
