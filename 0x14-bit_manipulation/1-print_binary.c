#include "main.h"

/**
 * print_binary - convert to binary
 * @n: numero in decimal
 * Return: number of characters printed
 */
void print_binary(unsigned long int n)
{
unsigned int bin, flag, i, digit, num;
int count = 0;

	if (n != 0)
	{
	num = n;
	bin = 0;
		while (num != 0)
		{
			num /= 2;
			bin++;
		}
	flag = 1;
		for (i = 1; i <= bin - 1; i++)
			flag *= 2;
		for (i = 1; i <= bin; i++)
		{
			digit = n / flag;
			_putchar(digit + '0');
			count++;
			n -= digit * flag;
			flag /= 2;
		}
	}
	else
	{
		_putchar('0');
	}
}
