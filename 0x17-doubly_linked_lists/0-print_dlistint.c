#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int ret;
	dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		ret = printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (ret);
}
