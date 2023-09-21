#include "main.h"
/**
 * *_strcpy - function pointer
 * @dest: first parametre
 * @src: second parametre
 * Return: the *dest is ret
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *ret = dest;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i + 1] = '\0';
	return (ret);
}
