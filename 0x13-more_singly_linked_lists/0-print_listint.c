#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the header of list
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count += printf("%d", h->n);
		printf("\n");
		h = h->next;
	}
	return (count);
}
