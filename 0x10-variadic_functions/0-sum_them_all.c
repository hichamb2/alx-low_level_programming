#include <stdarg.h>

/**
 * sum_them_all - function that sum n num from ...
 *
 *@n: is the num of elements
 *Return: sum of all numbers
 *
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	va_start(ptr, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
