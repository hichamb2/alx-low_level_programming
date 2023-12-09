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
 * get_dnodeint_at_index - finds specific node
 * @head: pointer to the beginning of the list
 * @index: index
 *
 * Return: pointer to the indexed node, or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;
	size_t len = dlistint_len(head);

	if ((size_t)index > len)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
