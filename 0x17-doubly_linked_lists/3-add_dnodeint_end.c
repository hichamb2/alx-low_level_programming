#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *temp;

	if (head == NULL)
	return (NULL);
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
		return (ptr);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	ptr->prev = temp;
	return (ptr);
}
