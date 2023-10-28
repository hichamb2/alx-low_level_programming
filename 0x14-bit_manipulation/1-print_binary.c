#include "main.h"

/**
 * print_binary - convert to binary
 * @n: numero in decimal
 * Return: number of characters printed
 */
void print_binary(unsigned long int n)
{
	int bin, i, index = 0;
	unsigned long int num;

	if (n != 0)
	{
		num = n;
		while (num != 0)
		{
			num = num >> 1;
			index++;
		}
		num = n;
		for (i = index; i > 0; i--)
		{
			bin = (n >> i) & 1;
			_putchar(bin + '0');
		}
	}
	else
	{
		_putchar('0');
	}
}
