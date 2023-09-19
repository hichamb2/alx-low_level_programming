#include <stdio.h>

/**
 * print_array - the function that prints array
 * @a: the input array
 * @n: the input size of tha a array
 *
*/


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
