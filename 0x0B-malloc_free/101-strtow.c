#include "main.h"
/**
 * *argstostr - function
 * @ac: argc
 * @av: argv
 * Return: ptr
 */
char **strtow(char *str)
{
	int i, wc;
	int *ptr;

	if (str == NULL || str == '')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			wc++;
	}
	if (wc == 0)
		return (0);
	ptr = malloc((wc + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (*str)
	{


