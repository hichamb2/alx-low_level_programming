#include "lists.h"
/**
 * print_listint - function
 * @h: par
 * Return: number of nods
 */
size_t print_listint(const listint_t *h)
{
	size_t val = 0;
	listint_t *temp;

	temp = h;
	while (temp->next != NULL)
	{
		printf("%d", temp->n);
		temp = temp->next;
	}
	return (val);
}
