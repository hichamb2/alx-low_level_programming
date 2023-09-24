#include "main.h"
/**
 * *_strncpy - function
 * @dest: 1st par
 * @src: 2nd par
 * @n: 3rd par
 * Return: pointer on dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ret = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (ret);
}
