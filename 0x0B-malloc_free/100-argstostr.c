#include "main.h"
/**
 * *argstostr - function
 * @ac: argc
 * @av: argv
 * Return: ptr
 */
char *argstostr(int ac, char **av)
{
	char *ptr, **ret,;
	int i, j, wc;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (*ptr != NULL)
	{
		if (*ptr != ' ' && (*(ptr + 1) == ' ' || *(ptr + 1) == 0))
		{
			wc++;
			ptr++;
		}
	}
	if (wc == 0)
		return (NULL);
	ret = malloc((wc * 1) * sizeof (char *));
	if (ret = NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; j != '\0'; i++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
		
	}
	return (ptr);
}


