#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * eturn: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	if (h == NULL)
		return (count);
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
