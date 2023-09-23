#include "main.h"
/**
 * *_strncat - the function.
 * @dest: 1st parametre
 * @src: 2nd parametre
 * @n: 3rd parametre
 * Return: po,ter to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;
	int i;

	while (*dest != '\0')
		dest++;
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	*dest = '\0';
	return (ret);
}
