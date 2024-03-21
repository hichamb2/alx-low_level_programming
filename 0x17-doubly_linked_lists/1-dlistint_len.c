#include "lists.h"

/**
 * dlistint_len - function count list
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int ret = 0;
	dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = (dlistint_t *)h;
	for (ret = 0; temp != NULL; ret++)
		temp = temp->next;
	return (ret);
}
