#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: first par
 * @argv: second par
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
