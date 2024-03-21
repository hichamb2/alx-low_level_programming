#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int ret = 0;
	dlistint_t *temp;

	if (h == NULL)
		return (ret);
	temp = (dlistint_t *)h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		ret++;
		temp = temp->next;
	}
	return (ret);
}
