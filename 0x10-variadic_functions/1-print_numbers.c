#include "variadic_functions.h"
/**
 * print_numbers - functio prints numbers
 * @separator: ", "
 * @n: the number of list
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ptr, int));
	va_end(ptr);
}
