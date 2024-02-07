#include "lists.h"
/**
 * add_nodeint - function that add a nodde
 * @head: the list
 * @n: data
 * Return: return the new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *b;

	b = (listint_t *)malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);
	b->n = n;
	b->next = *head;
	*head = b;
	return (*head);
}
