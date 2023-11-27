#include "lists.h"
/**
 * add_nodeint_end - function
 * @head: list
 * @n: element
 * Return: the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *b, *temp;

	b = (listint_t *)malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);
	b->n = n;
	b->next = NULL;
	if (*head == NULL)
	{
		*head = b;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = b;
	}
	return (*head);
}

