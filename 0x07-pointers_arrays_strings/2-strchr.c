#include "main.h"
/**
 * *_strchr - function
 * @s: the buffer
 * @c: the character
 * Return: prt on s
 */
char *_strchr(char *s, char c)
{
	while(*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
	return ('\0');
}
