#include "lists.h"

/**
 * listint_len - Returns the number of elements
 *               in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *				list at a given position.
 * @head: A pointer to the address of the
 *		head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *		node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *		Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	size_t i = 0, len = 0;

	len = listint_len(*head);
	if (*head == NULL || len < idx)
		return (NULL);
	if (len = 0)
	{
		ptr = add_nodeint(*head, n);
		return (ptr);
	}
	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	temp = *head;
	while (i < idx - 1 && temp)
	{
		temp = temp->next;
		i++;
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (*head);
}
