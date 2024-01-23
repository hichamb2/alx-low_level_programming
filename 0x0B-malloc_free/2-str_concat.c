#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that calcul the lengh of string
 * @str: the str that calculated
 * Return: the lengh of str
 */
int _strlen(char *str)
{
	int i, lengh = 0;

	if (!str)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		lengh++;
	return (lengh);
}
/**
 * str_concat - function that concatinats 2 strings
 * @s1: the 1st string
 * @s2: the 2nd string
 * Return: a pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	ptr = (char *)malloc((sizeof(char) * (_strlen(s1) + _strlen(s2))) + 1);
	if (!ptr)
		return (NULL);
	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			ptr[j] = s1[i];
			j++;
		}
	}
	if (s2)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			ptr[j] = s2[i];
			j++;
		}
	}
	ptr[j] = '\0';
	return (ptr);
}
