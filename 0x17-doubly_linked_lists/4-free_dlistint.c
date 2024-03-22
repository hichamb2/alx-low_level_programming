#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the beginning of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	if (temp->next != NULL)
	{
		temp = temp->next;
		while (temp != NULL)
		{
			free(head->next), head->next = NULL;
			free(temp->prev), temp->prev = NULL;
			head = temp;
			temp = temp->next;
		}
	}
	free(head), head = NULL;
	free(temp), temp = NULL;
}

