#include "lists.h"
/**
 * print_listint - function
 * @h: par
 * Return: number of nods
 */
size_t print_listint(const listint_t *h)
{
	size_t val = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		val++;
	}
	return (val);
}
