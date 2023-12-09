#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
dlistint_t head = {9, 0, 0};
size_t n;

n = print_dlistint(&head);
printf("-> %lu elements\n", n);
return (0);
}
