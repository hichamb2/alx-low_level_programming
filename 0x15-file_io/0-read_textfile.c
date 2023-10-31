#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *ptr;

	if (!filename)
		return (0);
	ptr = malloc(sizeof(char) * letters);
		if (!ptr)
			return (0);
	o = open(filename, O_RDONLY);
	r = read(o, ptr, letters);
	w = write(STDOUT_FILENO, ptr, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(ptr);
			return (0);
	}
	free(ptr);
	close(o);
	return (w);
}
