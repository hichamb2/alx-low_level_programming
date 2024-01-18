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

	for (i = 0; str[i] != '\0'; i++)
		lengh++;
	return (lengh);
}
/**
 * _strdup - function that returns a copy of the string given as a parameter.
 * @str: the string wich will be duplicated
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int len, i;
	char *ptr;

	len = _strlen(str);
	if (len == 0)
		return (0);
	ptr = (char *)malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);

}
