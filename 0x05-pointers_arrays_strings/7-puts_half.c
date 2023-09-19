#include "main.h"


/**
 * puts_half - function that print mod the half of str
 * @str: the input of string
 *
 */

void puts_half(char *str)
{
	int i;
	int half;

	for (i = 0; str[i] != '\0'; i++)
		;
	half = i / 2;
	if (i % 2 == 1)
	{
		half++;
	}
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
