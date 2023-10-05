#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that dublicate str
 *@str: input string
 * Return: NULL  if str is NULL and s if else
*/

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
