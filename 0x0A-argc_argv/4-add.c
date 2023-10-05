#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - check the code
 * @argc: first par
 * @argv: second par
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j = 0, sum = 0, leng;
	char *ptr;

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		leng = strlen(ptr);
		for (j = 0; j < leng; j++)
		{
			if (isdigit(*(ptr + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
		return (0);
}
