#include "main.h"
#include <stdio.h>
#include <stdlib.h>
long unsigned int read_textfile(const char *file_from);
int _strlen(char *strn);
int create_file(const char *file_to);
char *str;
ssize_t op_from, rd_from, close_from;
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;
	if (ac != 3)
	{
		dprintf(2, "Usage: %s\n", av[0]);
		exit(97);
	}
	read_textfile(av[1]);
	res = create_file(av[2]);
	printf("-> %i)\n", res);
	return (0);
}
/**
 * read_textfile - function
 * @filename: name of file
 * Return: letters
 */
long unsigned int read_textfile(const char *file_from)
{
	if (file_from == NULL)
	{
		return (0);
	}
	str = malloc(sizeof(char) * 1024);
		if (str == NULL)
			return (-1);
	op_from = open(file_from, O_RDONLY);
	rd_from = read(op_from, str, 1024);
	if (op_from == -1 || rd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		free(str);
		exit(98);
	}
	close_from = close(op_from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", op_from);
		exit(100);
	}
	return (rd_from);
}
/**
 * _strlen - calculat the lengh of str
 * @strn: the str wich will be calculated
 * Return: the nul of alphabets in str
 */
int _strlen(char *strn)
{
	int i = 0;

	for (i = 0; strn[i] != '\0'; i++)
		;
	return (i);
}
/**
 * create_file - function
 * @filename: the name of file
 * Return: Returns: 1 on success, -1
 */
int create_file(const char *file_to)
{
	int op_to, wr_to, close_to;

	if (file_to == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	op_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	wr_to = write(op_to, str, _strlen(str));
	if (op_to == -1 || wr_to == -1)
		return (-1);
	close_to = close(op_to);
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_to);
		exit(100);
	}
	return (1);
}
