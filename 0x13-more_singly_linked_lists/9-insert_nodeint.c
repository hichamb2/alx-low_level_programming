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
	if (len < idx)
		return (NULL);
	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
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
