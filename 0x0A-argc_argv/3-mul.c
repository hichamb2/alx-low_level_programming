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
	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
}
