#include "variadic_functions.h"
/**
 * print_all - functio prints numbers
 * @format: the str
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	char *str;
	int i = 0;
	char *sep = "";
	char f;

	va_start(ptr, format);
	while (format[i] != '\0')
	{
		f = format[i];
		switch (f)
		{
		case 'c':
			printf("%s%c", sep, va_arg(ptr, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(ptr, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(ptr, double));
			break;
		case 's':
			str = va_arg(ptr, char *);
			if (str == NULL)
				printf("(nil)");
			printf("%s%s", sep, str);
			break;
		default:
			break;
		}
	if ((f == 'c' || f == 'i' || f == 'f' || f == 's') && format[i + 1] != '\0')
		sep = ", ";
	i++;
	}
	va_end(ptr);
	printf("\n");
}
