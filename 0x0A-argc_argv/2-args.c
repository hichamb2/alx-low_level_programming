#include <stdlib.h>
#include <stdio.h>

/**
 * main- a program that prints its name
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; argc > i; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
