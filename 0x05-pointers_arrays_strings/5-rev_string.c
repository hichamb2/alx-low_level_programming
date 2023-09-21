#include "main.h"
/**
 * rev_string - the function that print number of characters
 * @s: the parametre
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char ch;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i != '\0'; i--)
	{
		ch = s[j];
		s[j] = s[i];
		s[i] = ch;
		j++;
	}
}
