#include "main.h"

/**
 * print_binary - convert to binary
 * @n: numero in decimal
 * Return: number of characters printed
 */
void print_binary(unsigned long int n)
{
	unsigned int num, i, index = 0;
	int arr[1024];

	if (n != 0)
	{
		num = n;
		while (num != 0)
		{
			num = num >> 1;
			index++;
		}
		num = n;
		for (i = 1; i <= index; i++)
		{
			arr[i] = _mod(num, 2);
			num = num >> 1;
		}
		for (i = index; i > 0; i--)
		{
			_putchar(arr[i] + '0');
		}
	}
	else
	{
		_putchar('0');
	}
}
