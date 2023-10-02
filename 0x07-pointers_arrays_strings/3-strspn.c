#include "main.h"
/**
 * _strspn - function
 * @s: the buffer
 * @accept: the character
 * Return: the size of accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 1;
	unsigned int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				count += 1;
				break;
			}
		}
	}
	return (count);
}
