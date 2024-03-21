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
		temp = temp->next;
	return (i);
}
/**
 * insert_dnodeint_at_index - finds specific node
 * @h: pointer to the beginning of the list
 * @idx: index
 * @n: element inserted
 *
 * Return: pointer to the indexed node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *b;
	unsigned int i;
	size_t len = dlistint_len(*h);

	if ((size_t)idx > len)
		return (NULL);
	b = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (b == NULL)
		return (NULL);
	b->n = n;
	b->next = b->prev = NULL;
	temp = *h;
	if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == len)
		add_dnodeint_end(h, n);
	else
	{
		for (i = 0; i <= idx; i++)
			temp = temp->next;
		b->next = temp;
		b->prev = temp;
		temp->prev->next = b;
		temp->prev = b;
	}
	return (*h);
}