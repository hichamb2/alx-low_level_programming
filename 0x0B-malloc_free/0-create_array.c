#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - fuction that create array
 * @size: the size wich allocated
 * @c: the char that created in the array
 * Return: pointer on the first element of array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (0);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
