#include "lists.h"
/**
 * listint_len - function that prints all the elements of a listint_t list.
 * @h: the header of list
 * Return: the number of nodes printed
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
