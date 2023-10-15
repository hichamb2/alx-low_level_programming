#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function print numbers
 * @separator: separe the numbers
 * @n: the last place
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
