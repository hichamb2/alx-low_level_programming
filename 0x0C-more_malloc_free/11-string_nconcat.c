#include "main.h"
/**
 *
 *
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int *ptr, i, j;

	ptr = malloc(((_length(s1) + 1) + n) * sizeof(s1));
	if (prt == 0)
		return (NULL);
	i = _length(s1);
	for (j = 0; j < n; i++)
	{
		s1[i] = s2[j];
	}
}
