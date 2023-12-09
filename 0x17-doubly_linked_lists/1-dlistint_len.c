#include "lists.h"

/**
 * dlistint_len - function count list
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	temp = h;
	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (i);
}
