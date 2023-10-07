#include "main.h"
/**
 * *create_array - function creat array
 * @size: size of the array
 * @c: char
 * Return: rerutn the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(c));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
