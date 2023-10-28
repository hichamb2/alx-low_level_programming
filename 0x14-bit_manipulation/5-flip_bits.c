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
 * flip_bits - set the binary index
 * @n: numero in decimal
 * @m: index of binary if 1 or 0
 * Return: 0 or 1 or -1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res, def;
	unsigned int index, k;

	res = 1;
	def = n ^ m;
	for (index = 0; index < ((sizeof(unsigned long int)) * 8 - 1); index++)
	{
		if (res == (def & res))
		{
			k++;
		}

	res <<= 1;
	}
	return (k);
}
