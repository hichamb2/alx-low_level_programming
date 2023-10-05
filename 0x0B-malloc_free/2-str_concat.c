#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int n, m;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	s = malloc((i * sizeof(char)) + ((j + 1) * sizeof(char)));
	if (s ==  NULL)
		return (NULL);
	for (n = 0; s1[n] != '\0'; n++)
		s[n] = s1[n];
	for (m = 0; s2[m] != '\0'; m++)
	{
		s[n] = s2[m];
		n++;
	}
	s[n] = '\0';
	return (s);
}
