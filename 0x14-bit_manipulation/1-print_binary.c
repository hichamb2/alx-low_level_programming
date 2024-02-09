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
 * _power - calculate the power of 2 numbers
 * @base: the base of power num
 * @pow: the power of pow
 * Return: return the result of "base" power "pow"
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int result = 1;
	unsigned int i;

	for (i = 0; i < pow; i++)
	{
		result *= base;
	}
	return (result);
}
/**
 * print_binary - convert to binary
 * @n: numero in decimal
 */

void print_binary(unsigned long int n)
{
	unsigned int digit, num;
	char bin;

	bin = 0;
	digit = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (digit != 0)
	{
		num = n & digit;
		if (num == digit)
		{
			bin = 1;
			_putchar('1');
		}
		else if (bin == 1 || digit == 1)
		{
			_putchar('0');
		}
	digit >>= 1;
	}
}
