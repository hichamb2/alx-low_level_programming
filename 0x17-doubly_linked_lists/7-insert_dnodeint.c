#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: double pointer to the beginning of the linked list
 * @idx: index
 * @n: data
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *next, *old;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		old = *h;
		for (i = 0; i < idx - 1 && old != NULL; i++)
			old = old->next;
		if (old == NULL)
			return (NULL);
	}
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = ptr;
		ptr->prev = NULL;
	}
	else
	{
		ptr->prev = old;
		next = old->next;
		old->next = ptr;
	}
	ptr->next = next;
	if (ptr->next != NULL)
		ptr->next->prev = ptr;
	return (ptr);
}
