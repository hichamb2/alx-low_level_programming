#include <stddef.h>

/**
 * array_iterator - a function that executes a given function
 *                  as a parameter on each element of an array
 *
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function to call
 *
 * Return: empty if @array and @action is NULL
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
