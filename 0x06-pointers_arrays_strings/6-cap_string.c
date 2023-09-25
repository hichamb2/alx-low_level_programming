#include "main.h"
/**
 * *cap_string - function low toupp
 * @ptr: 1st parametre
 * Return: char to pointer
 *
 */
char *cap_string(char *ptr)
{
	int i;

for (i = 0; ptr[i] != '\0'; i++)
{
	while (ptr[i + 1] > 96 && ptr[i + 1] < 123)
	{
		if (ptr[i] == ' ' || ptr[i] == '\n' ||
		ptr[i] == '\t' || ptr[i] == ',' ||
		ptr[i] == ';' || ptr[i] == '.' ||
		ptr[i] == '!' || ptr[i] == '?' ||
		ptr[i] == '"' || ptr[i] == '(' ||
		ptr[i] == ')' || ptr[i] == '{' ||
		ptr[i] == '}')
			ptr[i + 1] -= 32;
	i++;
	}
}
	return (ptr);
}
