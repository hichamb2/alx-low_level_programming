#include "variadic_functions.h"
/**
 * print_all - functio prints numbers
 * @format: the str
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	char *str;
	char *sep = "";
	int i = 0;

	va_start(ptr, format);
	while (format[i] != '\0')
	{
		switch(format[i])
		{
			case 'c' : printf("%s%c", sep, va_arg(ptr, int));
				 break;
			case 'i' : printf("%s%d", sep, va_arg(ptr, int));
				 break;
			case 'f' : printf("%s%f", sep, va_arg(ptr, double));
				 break;
			case 's' :
				   str = va_arg(ptr, char *);
				   if (str)
				   	printf("%s%s", sep, str);
				   else
					printf("%s(nil)", sep);
				 break;
			default: i++;
				 continue;
		}
		sep = ", ";
		i++;
	}
	va_end(ptr);
	printf("\n");
}
