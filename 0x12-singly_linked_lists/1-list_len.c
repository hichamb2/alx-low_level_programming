#include "lists.h"
/**
 * list_len - print function
 * @h: the list
 * Return: nul of nds
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
