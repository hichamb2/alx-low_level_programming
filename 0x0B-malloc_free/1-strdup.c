#include "main.h"
/**
 * *_strdup - function creat array
 * @str: size of the array
 * Return: rerutn the array
 */
char *_strdup(char *str)
{
	int leng, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (*str)
	{
		leng++;
		str++;
	}
	ptr = malloc((leng + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		*ptr = *str;
		ptr++;
		str++;
	}
	return (ptr);
}
