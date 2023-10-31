#include "main.h"
#include "main.h"
/**
 * _strlen - the function that print number of characters
 * @s: the parametre
 * Return: return the number of characters
 */
size_t _strlen(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	return (c);
}
/**
 * create_file -creates an array of chars, and initializes
 *
 * @text_content: is a NULL str
 * @filename: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	ssize_t lengh = 0;

	if (!filename)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content)
	{
		lengh = write(o, text_content, _strlen(text_content));
	}
	close(o);
	if (lengh == -1)
		return (-1);
	return (1);
}
