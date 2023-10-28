#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _mod - function calculate the modul of a on b
 * @a: first par (big num)
 * @b: second par (smal num)
 * Return: the resul of a mod b
 */
int _mod(int a, int b)
{
	while (a >= b)
	{
		a = a - b;
	}
	return (a);
}
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

	while (pow > 0)
	{
		if (pow & 1)
		{
			result *= base;
		}
		base = base * base; /** Square the base*/
		pow >>= 1;/**pow right shift by 1 = Divide by 2*/
	}
	return (result);
}
