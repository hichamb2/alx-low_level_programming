#include "main.h"
/**
 * append_text_to_file - function that append text on file
 * @filename: the name of file
 * @text_content: the str wich append to the file
 * Return: 1 if succes and -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, lengh = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (lengh = 0; text_content[lengh] != '\0'; lengh++)
			;
	}
	else
		return (-1);
	op = open(filename, O_RDWR | O_APPEND);
	if (text_content && op != -1)
	{
		for (lengh = 0; text_content[lengh] != '\0'; lengh++)
			;
		wr = write(op, text_content, lengh);
		if (wr == -1)
			return (-1);
	}
	close(op);
	return (1);
}
