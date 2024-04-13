#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code for ALX-Africa Cohort 5 Students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
