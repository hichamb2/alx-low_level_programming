#include "main.h"
/**
 * *_strchr - function
 * @s: the buffer
 * @c: the character
 * Return: prt on s
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0';s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
