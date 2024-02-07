#include "lists.h"
/**
 * listint_len - function that prints all the elements of a listint_t list.
 * @h: the header of list
 * Return: the number of nodes printed
 */
/**size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count ++;
		h = h->next;
	}
		return (count);
}*/
/**
 *
 *
 *
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *b, *temp;

	b = (listint_t *)malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);
	b->n = n;
	b->next = NULL;
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
	}
	b = temp;
	return (*head);

}
