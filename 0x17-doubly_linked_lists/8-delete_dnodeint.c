#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	old = *head;
	if (index == 0)
	{
		*head = old->next;
			if (old->next != NULL)
			{
				old->next->prev = NULL;
			}
		free(old);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (old->next == NULL)
			return (-1);
		old = old->next;
	}
	old->prev->next = old->next;
	if (old->next != NULL)
		old->next->prev = old->prev;
	free(old);
	return (1);
}
