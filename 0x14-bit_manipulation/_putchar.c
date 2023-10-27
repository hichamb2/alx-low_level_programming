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
 * _remainder - function calculate the modul of a on b
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
