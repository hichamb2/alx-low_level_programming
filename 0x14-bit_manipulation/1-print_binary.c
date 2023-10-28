#include "main.h"
/**
 * _div - calcul the division
 * @x: dividend
 * @y: divisor
 * Return: the result of x / y
 */
unsigned int _div(unsigned int x, unsigned int y)
{
unsigned int digit = 0;

while (x >= y)
{
x -= y;
digit++;
}
return (digit);
}
/**
 * print_binary - convert to binary
 * @n: numero in decimal
 * Return: number of characters printed
 */

void print_binary(unsigned long int n)
{
unsigned int bin, flag, i, digit, num;

	if (n != 0)
	{
	num = n;
	bin = 0;
		while (num != 0)
		{
			num = num >> 1;
			bin++;
		}
	flag = 1;
		for (i = 1; i <= bin - 1; i++)
			flag *= 2;
		for (i = 1; i <= bin; i++)
		{
			digit = _div(n, flag);
			_putchar(digit + '0');
			n = n - (digit * 1 * flag * 1);
			flag = flag >> 1;
		}
	}
	else
	{
		_putchar('0');
	}
}
