#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that print strings, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	va_end(ptr);
	}
	printf("\n");
}
