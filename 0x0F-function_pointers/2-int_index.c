#include <stddef.h>

/**
 * int_index - a function that executes a given function
 *                  as a parameter on each element of an array
 *
 * @array: array to iterate
 * @size: size of array
 * @cmp: pointer to function to call
 *
 * Return: empty if @array and @action is NULL
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
