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
	int count = 0;
	const listint_t *temp;

	if (h == NULL)
		return (count);
	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 * @head: the head wich points on linked list
 * @index: the index of the node, starting at 0
 * Return: returns the nth node of a listint_t linked list or NULL if the node does not exist
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t len, i = 0;
	listint_t *temp, *ptr;

if (head != NULL)
{	
	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	len = listint_len(head);
	if (len < index)
		return (NULL);
	temp = head;
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	ptr->n = temp->n;
	ptr->next = NULL;
	return (ptr);
}
else
	return (NULL);

}
