#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function add list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}

