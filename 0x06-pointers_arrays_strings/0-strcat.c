#include "main.h"
/**
 * *_strcat - the function
 * @dest: first parmetre
 * @src: seconde parametre
 * Return: ret the dest value
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
}
