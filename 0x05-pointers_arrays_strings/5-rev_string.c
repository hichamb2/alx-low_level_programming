#include "main.h"
/**
 * rev_string - the function that print number of characters
 * @s: the parametre
 * Return: return No thing
 */
void rev_string(char *s)
{
	int i, j = 0;
	char st[9];

	for (i = 0; s[i] != '\0'; i++)
	{
		st[i] = s[i];
	}
	for (i = i - 1; st[i] != '\0'; i--)
	{
		s[j] = st[i];
		j++;
	}
}
