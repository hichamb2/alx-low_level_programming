#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 *  * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%i ", n);
	if (n > 0)
		printf("is positive\n");
	if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return (0);
}
